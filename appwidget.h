#ifndef APPWIDGET_H
#define APPWIDGET_H

#include <QWidget>
#include <QPushButton>

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
    void toggleSideBar();
private:
    Ui::AppWidget *ui;

    QWidget *sideBarWidget;
    QPushButton *openSideBarButton;
};

#endif // APPWIDGET_H
