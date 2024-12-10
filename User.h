#ifndef USER_H
#define USER_H

#include <QString>
#include <QDateTime>
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

    QList<Data* > history;
    Data* recentData;

public:
    User(QString f, QString l, QString g, QString c, QString e, QString p, QString pass, QDate b, int w, int h);
    ~User();

    void addData();

    // getter functions
    QString getName();
    QString getGender();
    QString getEmail();
    QString getPassword();
    int getWeight();
    int getHeight();
    QList<Data*>* getHistory();
    Data* getRecentData();
};

#endif // USER_H
