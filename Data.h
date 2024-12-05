#ifndef DATA_H
#define DATA_H

#include <QString>
#include <QDateTime>
#include <random>

class Data{

public:
    Data();
    ~Data();

    void set(QString part);
    int get(QString part);

    int getRandomNum();

    bool getCompleted();

    QDateTime getCurrentDateTime() const;

private:
    int h1, h2, h3, h4, h5, h6, f1, f2, f3, f4, f5, f6;
    QDateTime currentDateTime;
};

#endif // DATA_H
