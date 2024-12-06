#ifndef DATA_H
#define DATA_H

#include <QString>
#include <QDateTime>
#include <random>
//Setup UI object
#include "ui_appwidget.h"
// Widget used to display charts -Bahir
#include <QtCharts>
// Define the scope for your variables and functions -Bahir
QT_CHARTS_USE_NAMESPACE

class Data{

public:
    Data();
    ~Data();

    void set(QString part);
    int get(QString part);

    int getRandomNum();

    bool getCompleted();

    QDateTime getCurrentDateTime() const;

    void process(Ui::AppWidget *ui2);

    void barChart();

private:
    int mean, upper, lower;
    int h[2][6];
    int f[2][6];
    QString symptoms[5];

    QDateTime currentDateTime;
    QBarSet *set0;
    QBarSeries *series;
    QChart *chart;
    QChartView *chartView;
};

#endif // DATA_H
