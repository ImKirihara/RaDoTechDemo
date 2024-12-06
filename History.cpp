#include "History.h"

History::History(){

};

History::~History(){

}

void History::addData(Data *d){
    dataList.append(d);
}

Data* History::getData(int i){
    return dataList[i];
}
