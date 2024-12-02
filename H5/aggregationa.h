#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "ClassB.h"
using namespace std;

class AggregationA {
private:
    ClassB &refB;

public:
    AggregationA(ClassB &value);
    string getBinfo();
    void setBinfo(const string& value);
};

#endif
