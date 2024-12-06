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


int Data::get(QString part){
    if(part == "H1"){
        return h[0][0];
    }
    if(part == "H2"){
        return h[0][1];
    }
    if(part == "H3"){
        return h[0][2];
    }
    if(part == "H4"){
        return h[0][3];
    }
    if(part == "H5"){
        return h[0][4];
    }
    if(part == "H6"){
        return h[0][5];
    }
    if(part == "F1"){
        return f[0][0];
    }
    if(part == "F2"){
        return f[0][1];
    }
    if(part == "F3"){
        return f[0][2];
    }
    if(part == "F4"){
        return f[0][3];
    }
    if(part == "F5"){
        return f[0][4];
    }
    if(part == "F6"){
        return f[0][5];
    }
    if(part == "H1_2"){
        return h[1][0];
    }
    if(part == "H2_2"){
        return h[1][1];
    }
    if(part == "H3_2"){
        return h[1][2];
    }
    if(part == "H4_2"){
        return h[1][3];
    }
    if(part == "H5_2"){
        return h[1][4];
    }
    if(part == "H6_2"){
        return h[1][5];
    }
    if(part == "F1_2"){
        return f[1][0];
    }
    if(part == "F2_2"){
        return f[1][1];
    }
    if(part == "F3_2"){
        return f[1][2];
    }
    if(part == "F4_2"){
        return f[1][3];
    }
    if(part == "F5_2"){
        return f[1][4];
    }
    if(part == "F6_2"){
        return f[1][5];
    }
    return -1;
}

void Data::set(QString part){
    if(part == "H1"){
        h[0][0] = getRandomNum();
    }
    if(part == "H2"){
        h[0][1] = getRandomNum();
    }
    if(part == "H3"){
        h[0][2] = getRandomNum();
    }
    if(part == "H4"){
        h[0][3] = getRandomNum();
    }
    if(part == "H5"){
        h[0][4] = getRandomNum();
    }
    if(part == "H6"){
        h[0][5] = getRandomNum();
    }
    if(part == "F1"){
        f[0][0] = getRandomNum();
    }
    if(part == "F2"){
        f[0][1] = getRandomNum();
    }
    if(part == "F3"){
        f[0][2] = getRandomNum();
    }
    if(part == "F4"){
        f[0][3] = getRandomNum();
    }
    if(part == "F5"){
        f[0][4] = getRandomNum();
    }
    if(part == "F6"){
        f[0][5] = getRandomNum();
    }
    if(part == "H1_2"){
        h[1][0] = getRandomNum();
    }
    if(part == "H2_2"){
        h[1][1] = getRandomNum();
    }
    if(part == "H3_2"){
        h[1][2] = getRandomNum();
    }
    if(part == "H4_2"){
        h[1][3] = getRandomNum();
    }
    if(part == "H5_2"){
        h[1][4] = getRandomNum();
    }
    if(part == "H6_2"){
        h[1][5] = getRandomNum();
    }
    if(part == "F1_2"){
        f[1][0] = getRandomNum();
    }
    if(part == "F2_2"){
        f[1][1] = getRandomNum();
    }
    if(part == "F3_2"){
        f[1][2] = getRandomNum();
    }
    if(part == "F4_2"){
        f[1][3] = getRandomNum();
    }
    if(part == "F5_2"){
        f[1][4] = getRandomNum();
    }
    if(part == "F6_2"){
        f[1][5] = getRandomNum();
    }
}

bool Data::getCompleted(){
    if(h[0][0] == -1 || h[0][1] == -1 || h[0][2] == -1 || h[0][3] == -1 || h[0][4] == -1 || h[0][5] == -1 || f[0][0] == -1 || f[0][1] == -1 || f[0][2] == -1 || f[0][3] == -1 || f[0][4] == -1 || f[0][5] == -1){
        return false;
    }
    return true;
}

int Data::getRandomNum(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(100, 900);

    return distr(gen);
}


