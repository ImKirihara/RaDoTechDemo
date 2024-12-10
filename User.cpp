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

}

void User::addData(){
    Data* d = new Data();
    history.append(d);
    recentData = d;
}

QString User::getName(){
    return firstName + " " + lastName;
}

QString User::getGender(){
    return gender;
}

QString User::getEmail(){
    return email;
}

QString User::getPassword(){
    return password;
}

int User::getWeight(){
    return weight;
}

int User::getHeight(){
    return height;
}

QList<Data*>* User::getHistory() {
    return &history;
}

Data* User::getRecentData(){
    return recentData;
}
