#ifndef DATA_H
#define DATA_H

#include <QString>
#include <QDateTime>
#include <random>
// Widget used to display charts -Bahir
#include <QtCharts>
// Define the scope for your variables and functions -Bahir
QT_CHARTS_USE_NAMESPACE

class Data : public QObject{
    Q_OBJECT
public:
    Data();
    ~Data();

    void set(QString part);
    int get(QString part);

    int getRandomNum();

    bool getCompleted();

    QDateTime getCurrentDateTime() const;
    const QVector<QVector<int>>& getH() const;
    const QVector<QVector<int>>& getF() const;

    void process();
//    void barChart(); // remove
signals:
    void updateLabelStyle(int index, const QString& color);
private:
    int mean, upper, lower;
    QVector<QVector<int>> h;
    QVector<QVector<int>> f;
    QString symptoms[5];

    QDateTime currentDateTime;
//    QBarSet *set0;
//    QBarSeries *series;
//    QChart *chart;
//    QChartView *chartView;
};

#endif // DATA_H
