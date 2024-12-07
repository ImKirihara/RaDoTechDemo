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

// defs.h definitions - Ellie
#include "defs.h"

class Data : public QObject{
    Q_OBJECT
public:
    Data();
    ~Data();

    void set(ScanType, int);
    int get(ScanType);

    int getRandomNum(int, int);

    bool getCompleted();

    QDateTime getCurrentDateTime() const;

    void process();

    void barChart();

    //Scans that will be used in the Main Window to get Data
    void scanHandsData();
    void scanFeetData();

signals:
    void updateLabelStyle(int index, const QString& color);
private:
    int mean, upper, lower;
    QVector<QVector<int>> h;
    QVector<QVector<int>> f;
    QString symptoms[5];

    QDateTime currentDateTime;
    QBarSet *set0;
    QBarSeries *series;
    QChart *chart;
    QChartView *chartView;
};

#endif // DATA_H
