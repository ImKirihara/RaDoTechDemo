#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <QStackedWidget>

namespace Ui {
class AppWindow;
}

class AppWindow : public QStackedWidget
{
    Q_OBJECT

public:
    explicit AppWindow(QWidget *parent = nullptr);
    ~AppWindow();

private:
    Ui::AppWindow *ui;
};

#endif // APPWINDOW_H
