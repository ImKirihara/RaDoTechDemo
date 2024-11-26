#include "User.h"

User::User(QString f, QString l, QString g, QString c, QString e, QString p, QString pass, QDate b, int w, int h){
    firstName = f;
    lastName = l;
    gender = g;
    country = c;
    email = e;
    phone = p;
    password = pass;
    birthday = b;
    weight = w;
    height = h;
}

User::~User(){
    qDeleteAll(history);
}

QString User::getName(){
    return firstName + " " + lastName;
}

QString User::getGender(){
    return gender;
}

int User::getWeight(){
    return weight;
}

int User::getHeight(){
    return height;
}

Data User::getHistory(int i){
    return *history[i];
}
