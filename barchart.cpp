#include "barchart.h"
#include "Data.h"

// mostly done by bashir but nathan added onto it and made it its own class
BarChart::BarChart(Data* data, QWidget *parent) : QWidget(parent)
{
    // Initialize the chart and bar sets
    set0 = new QBarSet("Left Side");
    set1 = new QBarSet("Right Side");  // New data set for Right Side

    // Get data from the Data object using getters
    const QVector<QVector<int>>& hData = data->getH();
    const QVector<QVector<int>>& fData = data->getF();

    // Populate the bar set with values from the data arrays
    *set0 << hData[0][0] << hData[0][1] << hData[0][2] << hData[0][3]
          << hData[0][4] << hData[0][5] << fData[0][0] << fData[0][2]
          << fData[0][2] << fData[0][3] << fData[0][4] << fData[0][5];

    *set1 << hData[1][0] << hData[1][1] << hData[1][2] << hData[1][3]
          << hData[1][4] << hData[1][5] << fData[1][0] << fData[1][2]
          << fData[1][2] << fData[1][3] << fData[1][4] << fData[1][5];

    // Create the series and append the data sets
    series = new QBarSeries();
    series->append(set0);
    series->append(set1);  // Add the Right Side data series

    // Create the chart and add the series
    chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Ryodoraku Readings");
    chart->setAnimationOptions(QChart::NoAnimation);

    // Define the category titles
    QStringList categories;
    categories << "Lungs" << "Pericaridium" << "Heart" << "Small Intestine" << "Lymph Vessel"
               << "Large Intestine" << "Pancrease" << "Liver" << "Kidney" << "Bladder"
               << "Gall Bladder" << "Stomach";

    // Create and set the primary category axis (for Left Side)
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);

    // Create and set the secondary axis (for Right Side)
    QBarCategoryAxis *axisX2 = new QBarCategoryAxis();
    axisX2->append(categories);

    // Create the default Y-axis (this is usually added automatically)
    chart->createDefaultAxes();

    // Set the primary axis for the first series (Left Side)
    chart->setAxisX(axisX, series);

    // Set the secondary axis for the second series (Right Side)
    chart->setAxisX(axisX2, series);

    // Set up the legend
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    // Create the chart view and add it to the widget
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setVisible(true);

    // Set layout for the widget
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(chartView);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    this->setLayout(layout);
}
