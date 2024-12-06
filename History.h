#ifndef HISTORY_H
#define HISTORY_H

#include <QList>
#include "Data.h"

class History{

public:
    History();
    ~History();

    void addData(Data *d);

    Data* getData(int i);

private:
    QList<Data*> dataList;
};

#endif // HISTORY_H
