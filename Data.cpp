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

const QVector<QVector<int>>& Data::getH() const{ return h;}
const QVector<QVector<int>>& Data::getF() const{ return f;}

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
    qDebug() << sum;
    upper = mean+0.7;
    lower = mean-0.7;

    qDebug() << upper;
    qDebug() << lower;

    // Emit signals to update UI based on conditions - Nathan
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            QString color;
            if (h[i][j] < lower && f[i][j] < lower) {
                color = "rgb(28, 113, 216)";  // Blue for below lower
            } else if (h[i][j] > upper && f[i][j] > upper) {
                color = "rgb(224, 27, 36)";  // Red for above upper
            }
            else{
                color = "rgb(51, 209, 122)";
            }
            emit updateLabelStyle(i * 6 + j, color);
        }
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

