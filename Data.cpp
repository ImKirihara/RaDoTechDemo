#include "Data.h"

Data::Data(){

    mean = -1;
   upper = -1;
   lower = -1;

   // Initialize h and f with 2 rows and 6 columns, filled with -1
   h.resize(2);
   f.resize(2);

   // Initialize each row with 6 columns, filled with -1
   for (int i = 0; i < 2; ++i) {
       h[i] = QVector<int>(6, -1);  // Initialize each row to 6 elements with value -1
       f[i] = QVector<int>(6, -1);  // Initialize each row to 6 elements with value -1
   }

    currentDateTime = QDateTime::currentDateTime();
}

Data::~Data(){

}

QDateTime Data::getCurrentDateTime() const {
    return currentDateTime;
}

void Data::process() //Controls/Updates data visual representation boxes -Bahir
{
    int sum = 0;

    for(int i =0; i <2; ++i){
        for(int j = 0; j < 6; ++j){
            sum +=h[i][j];
            sum +=f[i][j];
        }
    }
    mean = sum/24 ;
    upper = mean+0.7;
    lower = mean-0.7;

    // Emit signals to update UI based on conditions - Nathan
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            QString color;
            if (h[i][j] < lower || f[i][j] < lower) {
                color = "rgb(28, 113, 216)";  // Blue for below lower
            } else if (h[i][j] > upper || f[i][j] > upper) {
                color = "rgb(224, 27, 36)";  // Red for above upper
            }
            emit updateLabelStyle(i * 6 + j, color);
        }
    }
    
}

void Data::barChart() //Controls bar chart -Bahir
{
    // Assign names to the set of bars used
    set0 = new QBarSet("Left Side");
    //QBarSet *set1 = new QBarSet("Martinez");

    // Assign values for each bar
    *set0 << h[0][0] << h[0][1] << h[0][2] <<h[0][3] << h[0][4] << h[0][5] << f[0][0] << f[0][2] << f[0][2] << f[0][3] << f[0][4] << f[0][5];
    //*set1 << 250 << 315 << 282 << 307 << 303 << 330;

    // Add all sets of data to the chart as a whole
    // 1. Bar Chart
    series = new QBarSeries();

    // 2. Stacked bar chart
    // QHorizontalStackedBarSeries *series = new QHorizontalStackedBarSeries();
    series->append(set0);
    //series->append(set1);

    // Used to define the bar chart to display, title
    // legend,
    chart = new QChart();

    // Add the chart
    chart->addSeries(series);

    // Set title
    chart->setTitle("Ryodoraku Readings");

    // Define starting animation
    // NoAnimation, GridAxisAnimations, SeriesAnimations
    chart->setAnimationOptions(QChart::AllAnimations);
    // Holds the category titles
    QStringList categories;
    categories << "Lungs" << "Pericaridium" << "Heart" << "Small Intestine" << "Lymph Vessel" << "Large Intestine" << "Pancrease" << "Liver" << "Kidney" << "Bladder" << "Gall Bladder" << "Stomach";

    // Adds categories to the axes
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();

    // 1. Bar chart
    chart->setAxisX(axis, series);


   // Define where the legend is displayed
   chart->legend()->setVisible(true);
   chart->legend()->setAlignment(Qt::AlignBottom);

   // Used to display the chart
   chartView = new QChartView(chart);
   chartView->setRenderHint(QPainter::Antialiasing);
   chartView->setVisible(true);
}

int Data::get(ScanType part){
    if(part == H1Left){
        return h[0][0];
    }
    if(part == H2Left){
        return h[0][1];
    }
    if(part == H3Left){
        return h[0][2];
    }
    if(part == H4Left){
        return h[0][3];
    }
    if(part == H5Left){
        return h[0][4];
    }
    if(part == H6Left){
        return h[0][5];
    }
    if(part == F1Left){
        return f[0][0];
    }
    if(part == F2Left){
        return f[0][1];
    }
    if(part == F3Left){
        return f[0][2];
    }
    if(part == F4Left){
        return f[0][3];
    }
    if(part == F5Left){
        return f[0][4];
    }
    if(part == F6Left){
        return f[0][5];
    }
    if(part == H1Right){
        return h[1][0];
    }
    if(part == H2Right){
        return h[1][1];
    }
    if(part == H3Right){
        return h[1][2];
    }
    if(part == H4Right){
        return h[1][3];
    }
    if(part == H5Right){
        return h[1][4];
    }
    if(part == H6Right){
        return h[1][5];
    }
    if(part == F1Right){
        return f[1][0];
    }
    if(part == F2Right){
        return f[1][1];
    }
    if(part == F3Right){
        return f[1][2];
    }
    if(part == F4Right){
        return f[1][3];
    }
    if(part == F5Right){
        return f[1][4];
    }
    if(part == F6Right){
        return f[1][5];
    }
    return -1;
}

void Data::set(ScanType part, int newInt){
    if(part == H1Left){
        h[0][0] = newInt;
    }
    if(part == H2Left){
        h[0][1] = newInt;
    }
    if(part == H3Left){
        h[0][2] = newInt;
    }
    if(part == H4Left){
        h[0][3] = newInt;
    }
    if(part == H5Left){
        h[0][4] = newInt;
    }
    if(part == H6Left){
        h[0][5] = newInt;
    }
    if(part == F1Left){
        f[0][0] = newInt;
    }
    if(part == F2Left){
        f[0][1] = newInt;
    }
    if(part == F3Left){
        f[0][2] = newInt;
    }
    if(part == F4Left){
        f[0][3] = newInt;
    }
    if(part == F5Left){
        f[0][4] = newInt;
    }
    if(part == F6Left){
        f[0][5] = newInt;
    }
    if(part == H1Right){
        h[1][0] = newInt;
    }
    if(part == H2Right){
        h[1][1] = newInt;
    }
    if(part == H3Right){
        h[1][2] = newInt;
    }
    if(part == H4Right){
        h[1][3] = newInt;
    }
    if(part == H5Right){
        h[1][4] = newInt;
    }
    if(part == H6Right){
        h[1][5] = newInt;
    }
    if(part == F1Right){
        f[1][0] = newInt;
    }
    if(part == F2Right){
        f[1][1] = newInt;
    }
    if(part == F3Right){
        f[1][2] = newInt;
    }
    if(part == F4Right){
        f[1][3] = newInt;
    }
    if(part == F5Right){
        f[1][4] = newInt;
    }
    if(part == F6Right){
        f[1][5] = newInt;
    }
}

// Scans For Data
// Both H/F for left and Right
// Assigns the data to the Array
// - Ellie
void Data::scanHandsData(){
    for (int i = 0; i <= 5; ++i) {
        //Sets The First Set of Random Data
        int firstHand = getRandomNum(5, 80);
        //Sets the First hands Data
        h[0][i] =  firstHand;
        //This is to calculate for Opposite Hand Should be +-0 - 5
        int oppositeHand = getRandomNum(-5, 5) + firstHand;
        //Limits it so that it doesnt go above 160
        if (oppositeHand > 160){
            oppositeHand = oppositeHand -  ((oppositeHand + firstHand) - 160);
        }
        h[1][i] = oppositeHand;
    }
}

void Data::scanFeetData(){
    for (int i = 0; i <= 5; ++i) {
        //Sets The First Set of Random Data
        int firstFoot = getRandomNum(3, 80);
        //Sets the First hands Data
        f[0][i] =  firstFoot;
        //This is to calculate for Opposite Hand Should be +-0 - 5
        int oppositeFoot = getRandomNum(-5, 5) + firstFoot;
        //Limits it so that it doesnt go above 160
        if (oppositeFoot > 160){
            oppositeFoot = oppositeFoot - ((oppositeFoot + firstFoot) - 160);
        } else if (oppositeFoot < 0){
            oppositeFoot = 3;
        }
        f[1][i] = oppositeFoot;
    }
}

// - Ellie




bool Data::getCompleted(){
    if(h[0][0] == -1 || h[0][1] == -1 || h[0][2] == -1 || h[0][3] == -1 || h[0][4] == -1 || h[0][5] == -1 || f[0][0] == -1 || f[0][1] == -1 || f[0][2] == -1 || f[0][3] == -1 || f[0][4] == -1 || f[0][5] == -1){
        return false;
    }
    return true;
}

//Takes in the Range you want it to be in between - Ellie
int Data::getRandomNum(int r1, int r2){
    std::random_device rd;
    std::mt19937 gen(rd());
    //Gets a Random Number for 1 Scan
    // In between 5 and 80 as shown in Ryodoraku
    // - Ellie
    std::uniform_int_distribution<> distr(r1, r2);

    return distr(gen);
}


