#ifndef USER_H
#define USER_H

#include <QString>
#include <QDate>
#include <QList>

#include "Data.h"

class User {

private:
    QString firstName;
    QString lastName;
    QString gender;
    QString country;
    QString email;
    QString password;
    QString phone;

    QDate birthday;

    int weight;
    int height;

    QList<Data*> history;

public:
    User(QString f, QString l, QString g, QString c, QString e, QString p, QString pass, QDate b, int w, int h);
    ~User();

    // getter functions
    QString getName();
    QString getGender();
    int getWeight();
    int getHeight();
    Data getHistory(int i);
};

#endif // USER_H
