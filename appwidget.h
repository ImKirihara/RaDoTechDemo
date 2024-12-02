#ifndef APPWIDGET_H
#define APPWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QButtonGroup>
#include <QStackedWidget>
#include <QVBoxLayout>
#include "User.h"

namespace Ui {
class AppWidget;
}

class AppWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AppWidget(QWidget *parent = nullptr);
    ~AppWidget();

    void setActiveUser(User* user);
private slots:
    void switchPage(int pageId);
    void viewScanner();
    bool completeScan();
    bool doneScan();

signals:
    void signOutRequest();

private:
    Ui::AppWidget *ui;

    User* activeUser = nullptr;

    QStackedWidget *stackedWidget;
    QWidget *sideBarWidget;
    QButtonGroup *sideBarButtons;
    void setupSideBarButtons();

};

#endif // APPWIDGET_H
