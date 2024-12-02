#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QMessageBox>
#include "User.h"
#include "appwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString getGender();

private:
    Ui::MainWindow *ui;
    QList<User*> profiles;

    AppWidget *appWidget;

public slots:
    bool createUser();
    bool loginUser();
    void changePage(QWidget *page);
    void signOut();

};
#endif // MAINWINDOW_H
