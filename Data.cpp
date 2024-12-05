#include "Data.h"

Data::Data(){
    h1 = -1;
    h2 = -1;
    h3 = -1;
    h4 = -1;
    h5 = -1;
    h6 = -1;
    f1 = -1;
    f2 = -1;
    f3 = -1;
    f4 = -1;
    f5 = -1;
    f6 = -1;

    currentDateTime = QDateTime::currentDateTime();
}

Data::~Data(){

}

QDateTime Data::getCurrentDateTime() const {
    return currentDateTime;
}

int Data::get(QString part){
    if(part == "H1"){
        return h1;
    }
    if(part == "H2"){
        return h2;
    }
    if(part == "H3"){
        return h3;
    }
    if(part == "H4"){
        return h4;
    }
    if(part == "H5"){
        return h5;
    }
    if(part == "H6"){
        return h6;
    }
    if(part == "F1"){
        return f1;
    }
    if(part == "F2"){
        return f2;
    }
    if(part == "F3"){
        return f3;
    }
    if(part == "F4"){
        return f4;
    }
    if(part == "F5"){
        return f5;
    }
    if(part == "F6"){
        return f6;
    }
    return -1;
}

void Data::set(QString part){
    if(part == "H1"){
        h1 = getRandomNum();
    }
    if(part == "H2"){
        h2 = getRandomNum();
    }
    if(part == "H3"){
        h3 = getRandomNum();
    }
    if(part == "H4"){
        h4 = getRandomNum();
    }
    if(part == "H5"){
        h5 = getRandomNum();
    }
    if(part == "H6"){
        h6 = getRandomNum();
    }
    if(part == "F1"){
        f1 = getRandomNum();
    }
    if(part == "F2"){
        f2 = getRandomNum();
    }
    if(part == "F3"){
        f3 = getRandomNum();
    }
    if(part == "F4"){
        f4 = getRandomNum();
    }
    if(part == "F5"){
        f5 = getRandomNum();
    }
    if(part == "F6"){
        f6 = getRandomNum();
    }
}

bool Data::getCompleted(){
    if(h1 == -1 || h2 == -1 || h3 == -1 || h4 == -1 || h5 == -1 || h6 == -1 || f1 == -1 || f2 == -1 || f3 == -1 || f4 == -1 || f5 == -1 || f6 == -1){
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
