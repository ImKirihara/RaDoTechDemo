#include "appwidget.h"
#include "ui_appwidget.h"
#include "mainwindow.h"
#include <QtDebug>

AppWidget::AppWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AppWidget)
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

    connect(ui->signOutButton, &QPushButton::clicked, this, &AppWidget::signOutRequest);
}

AppWidget::~AppWidget()
{
    delete ui;
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
    stackedWidget->setCurrentIndex(pageId);  // Switch to the page by index
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
    if(activeUser->getRecentData()->getCompleted()){
        ui->scanBox->setVisible(false);
        ui->scanBox->setEnabled(false);
        return true;
    } else {
        QMessageBox::warning(this, "Incomplete", "You did not scan all parts.");
        return false;
    }
}

void AppWidget::setActiveUser(User* user){
    activeUser = user;
}

