#ifndef APPWIDGET_H
#define APPWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QButtonGroup>
#include <QStackedWidget>
#include <QVBoxLayout>

namespace Ui {
class AppWidget;
}

class AppWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AppWidget(QWidget *parent = nullptr);
    ~AppWidget();
private slots:
    void switchPage(int pageId);

private:
    Ui::AppWidget *ui;

    QStackedWidget *stackedWidget;
    QWidget *sideBarWidget;
    QButtonGroup *sideBarButtons;
    void setupSideBarButtons();

};

#endif // APPWIDGET_H
