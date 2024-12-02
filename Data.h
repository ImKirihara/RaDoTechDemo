#ifndef DATA_H
#define DATA_H

#include <QString>
#include <random>

class Data{

public:
    Data();
    ~Data();

    void set(QString part);
    int get(QString part);

    int getRandomNum();

    bool getCompleted();

private:
    int h1, h2, h3, h4, h5, h6, f1, f2, f3, f4, f5, f6;
};

#endif // DATA_H
