#ifndef ASSOCIATIONA_H
#define ASSOCIATIONA_H

#include "ClassB.h"
using namespace std;

class AssosiationA {
private:
    ClassB objectB;

public:
    AssosiationA(ClassB value);
    string getBinfo();
    void setBinfo(const string& value);
};

#endif
