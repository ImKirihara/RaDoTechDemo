#include "appwidget.h"
#include "ui_appwidget.h"
#include <QtDebug>

AppWidget::AppWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AppWidget)
{
    ui->setupUi(this);

    stackedWidget = ui->stackedWidget;
    sideBarWidget = ui->sideBar;

    setupSideBarButtons();
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
