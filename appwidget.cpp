#include "appwidget.h"
#include "ui_appwidget.h"
#include "mainwindow.h"
#include <QtDebug>


AppWidget::AppWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AppWidget),
    currentViewingData(nullptr)
{
    ui->setupUi(this);

    stackedWidget = ui->stackedWidget;
    sideBarWidget = ui->sideBar;

    ui->stackedWidget->setCurrentWidget(ui->homePage);
    ui->scanBox->setVisible(false);

    setupSideBarButtons();

    // Scanner stuff - Mel
    connect(ui->startScanButton, SIGNAL(clicked()), this, SLOT(viewScanner()));
    connect(ui->scanButton, SIGNAL(clicked()), this, SLOT(completeScan()));
    connect(ui->doneButton, SIGNAL(clicked()), this, SLOT(doneScan()));
    connect(ui->showDataButton, SIGNAL(clicked()), this, SLOT(setCurrentViewingData()));

    connect(ui->signOutButton, &QPushButton::clicked, this, &AppWidget::signOutRequest);

    // User History - Nathan
    historyWidget = ui->historyList;



}

AppWidget::~AppWidget()
{
    delete ui;
}
// set the current viewing data to what is selected in history
void AppWidget::setCurrentViewingData(){
    int index = historyWidget->currentRow();

    if (index >= 0 && index < activeUser->getHistory()->size()) {
        currentViewingData = activeUser->getHistory()->at(index);

        switchPage(2);
        displayData();
    } else {
        QMessageBox::warning(this, "Selection Error", "Please select a valid history entry.");
    }


}
void AppWidget::setupSideBarButtons()
{
    for(QObject *obj : sideBarWidget->children()){
        QPushButton* button = qobject_cast<QPushButton*>(obj);
        if(button){
            QVariant id = button->property("id");
            if(id.isValid() && id.canConvert<int>()){
                int pageId = id.toInt();

                connect(button, &QPushButton::clicked, this, [this, pageId](){
                    switchPage(pageId);
                });
            }
        }
    }
}

void AppWidget::switchPage(int pageId)
{
    // Switch to the page by index
    stackedWidget->setCurrentIndex(pageId);
}

void AppWidget::viewScanner(){
    ui->scanBox->setVisible(true);
    ui->scanBox->setEnabled(true);

    activeUser->addData();
}

bool AppWidget::completeScan(){
    QList<QRadioButton*> radioButtons = ui->scanBox->findChildren<QRadioButton*>();

    for(QRadioButton* rb : radioButtons){
        if(rb->isChecked()){
            activeUser->addInfo(rb->objectName());
            return true;
        }
    }
    QMessageBox::warning(this, "Invalid", "You did not select a body part");
    return false;
}

bool AppWidget::doneScan(){
    if(!activeUser->getRecentData()->getCompleted()){
        QMessageBox::warning(this, "Incomplete", "You did not scan all parts.");
        return false;
    }
    ui->scanBox->setVisible(false);
    ui->scanBox->setEnabled(false);

    // update history widget - Nathan
    historyWidget->clear();
    for (int i = 0; i < activeUser->getHistory()->size(); ++i) {
        Data* data = activeUser->getHistory()->at(i);
        QString displayText = QString("Entry %1: %2")
                              .arg(i + 1)
                              .arg(data->getCurrentDateTime().toString("yyyy-MM-dd HH:mm:ss"));
        historyWidget->addItem(displayText);
    }

    // set current viewing data
    currentViewingData = activeUser->getRecentData();
    // Send to view data
    switchPage(2);
    displayData();
    //connect Data - nathan
    connect(currentViewingData, &Data::updateLabelStyle, this, &AppWidget::handle_updateLabelStyle);
    //barChart();
    return true;
}

void AppWidget::setActiveUser(User* user){
    activeUser = user;

}

void AppWidget::handle_updateLabelStyle(int index, const QString& color){
    // Map the index to the corresponding label - Nathan
        QLabel* label = findLabelByIndex(index);
        if (label) {
            label->setStyleSheet("background-color: " + color);
        }
}

QLabel* AppWidget::findLabelByIndex(int index) {
    switch (index) {
        case 0: return ui->label_17;
        case 1: return ui->label_18;
        case 2: return ui->label_19;
        case 3: return ui->label_20;
        case 4: return ui->label_21;
        case 5: return ui->label_22;
        case 6: return ui->label_23;
        case 7: return ui->label_24;
        case 8: return ui->label_25;
        case 9: return ui->label_26;
        case 10: return ui->label_27;
        case 11: return ui->label_28;
        default: return nullptr;
    }
}
void AppWidget::displayData(){
    // VERY TEMPORARY
    if (currentViewingData) {
        if (currentViewingData) {
            currentViewingData->barChart(); //Setup bar chart -Bahir
            currentViewingData->process();  //Setup color data visualisation -Bahir
            // Assign H1 to H6
            // Assign H1 to H6
            ui->h1Text->setPlainText(QString::number(currentViewingData->get("H1")));
            ui->h2Text->setPlainText(QString::number(currentViewingData->get("H2")));
            ui->h3Text->setPlainText(QString::number(currentViewingData->get("H3")));
            ui->h4Text->setPlainText(QString::number(currentViewingData->get("H4")));
            ui->h5Text->setPlainText(QString::number(currentViewingData->get("H5")));
            ui->h6Text->setPlainText(QString::number(currentViewingData->get("H6")));

            // Assign F1 to F6
            ui->f1Text->setPlainText(QString::number(currentViewingData->get("F1")));
            ui->f2Text->setPlainText(QString::number(currentViewingData->get("F2")));
            ui->f3Text->setPlainText(QString::number(currentViewingData->get("F3")));
            ui->f4Text->setPlainText(QString::number(currentViewingData->get("F4")));
            ui->f5Text->setPlainText(QString::number(currentViewingData->get("F5")));
            ui->f6Text->setPlainText(QString::number(currentViewingData->get("F6")));

        }

    }

}

