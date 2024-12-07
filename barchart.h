#ifndef BARCHART_H
#define BARCHART_H

#include <QWidget>
#include <QtCharts>

QT_CHARTS_USE_NAMESPACE

class Data;

class BarChart : public QWidget
{
    Q_OBJECT
public:
    explicit BarChart(Data* data, QWidget *parent = nullptr);

private:
    QBarSet *set0;
    QBarSet *set1;
    QBarSeries *series;
    QChart *chart;
    QChartView *chartView;

};

#endif // BARCHART_H
