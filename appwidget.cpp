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

    batteryTimer = new QTimer(this);

    stackedWidget = ui->stackedWidget;
    sideBarWidget = ui->sideBar;

    ui->stackedWidget->setCurrentWidget(ui->homePage);
    ui->scanBox->setVisible(false);

    setupSideBarButtons();

    // Scanner stuff - Mel
    connect(ui->startScanButton, SIGNAL(clicked()), this, SLOT(viewScanner()));
    connect(ui->doneButton, SIGNAL(clicked()), this, SLOT(doneScan()));
    connect(ui->showDataButton, SIGNAL(clicked()), this, SLOT(setCurrentViewingData()));
    connect(ui->signOutButton, &QPushButton::clicked, this, &AppWidget::signOutRequest);

    // Battery - Mel
    connect(ui->chargeButton, SIGNAL(clicked()), this, SLOT(chargeBattery()));
    connect(batteryTimer, &QTimer::timeout, this, &AppWidget::decreaseBattery);

    //  Scan Data - Ellie
    connect(ui->scanHandsButton, SIGNAL(clicked()), this, SLOT(scanHands()));
    connect(ui->scanFeetButton, SIGNAL(clicked()), this, SLOT(scanFeet()));

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

    batteryTimer->start(1000);
}

//bool AppWidget::completeScan(){
//    QList<QRadioButton*> radioButtons = ui->scanBox->findChildren<QRadioButton*>();

//    for(QRadioButton* rb : radioButtons){
//        if(rb->isChecked()){
//            activeUser->addInfo(rb->objectName());
//            return true;
//        }
//    }
//    QMessageBox::warning(this, "Invalid", "You did not select a body part");
//    return false;
//}

// Scans For Data
// Both H/F for left and Right
// Assigns the data to the Array

void AppWidget::scanHands(){
    if(ui->batteryBar->value() <= 0){
        QMessageBox::warning(this, "Battery", "RaDoTech device is out of charge. Please recharge and try again.");
        return;
    }
    activeUser->getRecentData()->scanHandsData();

    // Simulate the scan happening overtime - nathan
    QList<QLabel *> labels = {
        ui->RH1, ui->RH2, ui->RH3, ui->RH4, ui->RH5, ui->RH6,
        ui->LH1, ui->LH2, ui->LH3, ui->LH4, ui->LH5, ui->LH6
    };

    this->setEnabled(false);

    QTimer *timer = new QTimer(this);
    int currentIndex = 0;

    connect(timer, &QTimer::timeout, this, [=]() mutable{
    if (currentIndex < labels.size()) {
               labels[currentIndex]->setStyleSheet("color: green;");
               currentIndex++;
           } else {
               timer->stop();
               timer->deleteLater();
               this->setEnabled(true);
           }
    });

    timer->start(250);
}

void AppWidget::scanFeet(){
    if(ui->batteryBar->value() <= 0){
        QMessageBox::warning(this, "Battery", "RaDoTech device is out of charge. Please recharge and try again.");
        return;
    }
    activeUser->getRecentData()->scanFeetData();

    // Simulate the scan happening overtime - nathan
    QList<QLabel *> labels = {
        ui->RF1, ui->RF2, ui->RF3, ui->RF4, ui->RF5, ui->RF6,
        ui->LF1, ui->LF2, ui->LF3, ui->LF4, ui->LF5, ui->LF6
    };

    this->setEnabled(false);

    QTimer *timer = new QTimer(this);
    int currentIndex = 0;

    connect(timer, &QTimer::timeout, this, [=]() mutable{
    if (currentIndex < labels.size()) {
               labels[currentIndex]->setStyleSheet("color: green;");
               currentIndex++;
           } else {
               timer->stop();
               timer->deleteLater();
               this->setEnabled(true);
           }
    });

    timer->start(250);
}


bool AppWidget::doneScan(){
    if(!activeUser->getRecentData()->getCompleted()){
        QMessageBox::warning(this, "Incomplete", "You did not scan all parts.");
        return false;
    }

    QList<QLabel *> labels = {
        ui->RF1, ui->RF2, ui->RF3, ui->RF4, ui->RF5, ui->RF6,
        ui->LF1, ui->LF2, ui->LF3, ui->LF4, ui->LF5, ui->LF6,
        ui->RH1, ui->RH2, ui->RH3, ui->RH4, ui->RH5, ui->RH6,
        ui->LH1, ui->LH2, ui->LH3, ui->LH4, ui->LH5, ui->LH6
    };


    for(QLabel* l : labels){
        l->setStyleSheet("color: red;");
    }


    ui->scanBox->setVisible(false);
    ui->scanBox->setEnabled(false);

    batteryTimer->stop();

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
            //connect Data - nathan
            connect(currentViewingData, &Data::updateLabelStyle, this, &AppWidget::handle_updateLabelStyle);

            currentViewingData->process();  //Setup color data visualisation -Bahir
            BarChart *barChartWidget = new BarChart(currentViewingData, ui->tab_2);
            barChartWidget->show();
            barChartWidget->setFixedSize(621,601);

            QList<QTextBrowser*> handTexts = {
                ui->HL1txt, ui->HL2txt, ui->HL3txt, ui->HL4txt, ui->HL5txt, ui->HL6txt,
                ui->HR1txt, ui->HR2txt, ui->HR3txt, ui->HR4txt, ui->HR5txt, ui->HR6txt
            };
            QList<QTextBrowser*> feetTexts = {
                ui->FL1txt, ui->FL2txt, ui->FL3txt, ui->FL4txt, ui->FL5txt, ui->FL6txt,
                ui->FR1txt, ui->FR2txt, ui->FR3txt, ui->FR4txt, ui->FR5txt, ui->FR6txt
            };

            QVector<QVector<int>> h = currentViewingData->getH();
            QVector<QVector<int>> f = currentViewingData->getF();

            for (int i = 0; i < 6; ++i) {
                // Set left-hand data
                handTexts[i]->setText(QString::number(h[0][i]));

                // Set right-hand data
                handTexts[i + 6]->setText(QString::number(h[1][i]));

                // Set left-foot data
                feetTexts[i]->setText(QString::number(f[0][i]));

                // Set right-foot data
                feetTexts[i + 6]->setText(QString::number(f[1][i]));
            }


        }
}

void AppWidget::decreaseBattery(){
    int currBattery = ui->batteryBar->value();
    ui->batteryBar->setValue(currBattery - 1);
}

void AppWidget::chargeBattery(){
    ui->batteryBar->setValue(100);
}

