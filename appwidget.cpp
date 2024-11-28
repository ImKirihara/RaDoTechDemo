#include "appwidget.h"
#include "ui_appwidget.h"

AppWidget::AppWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AppWidget)
{
    ui->setupUi(this);

    sideBarWidget = ui->sideBar;
    openSideBarButton = ui->openSidebar;

    // Initially hide the sidebar
    sideBarWidget->setVisible(false);

    connect(openSideBarButton, &QPushButton::clicked, this, &AppWidget::toggleSideBar);
}

AppWidget::~AppWidget()
{
    delete ui;
}

void AppWidget::toggleSideBar(){
    sideBarWidget->setVisible(!sideBarWidget->isVisible());
}
