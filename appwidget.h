#ifndef APPWIDGET_H
#define APPWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QButtonGroup>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QDateTime>
#include <QListWidget>
#include "User.h"
#include "barchart.h"

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
    void setCurrentViewingData();
    void viewScanner();
    bool completeScan();
    bool doneScan();
public slots:
    void handle_updateLabelStyle(int index, const QString& color);

signals:
    void signOutRequest();

private:
    Ui::AppWidget *ui;

    User* activeUser = nullptr;
    Data* currentViewingData;

    QLabel* findLabelByIndex(int index);
    QStackedWidget *stackedWidget;
    QWidget *sideBarWidget;
    QButtonGroup *sideBarButtons;
    QListWidget *historyWidget;
    void setupSideBarButtons();
    void displayData();

};

#endif // APPWIDGET_H
