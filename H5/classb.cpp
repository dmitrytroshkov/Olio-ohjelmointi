#include "ClassB.h"


ClassB::ClassB() : info("") {}


ClassB::~ClassB() {}


string ClassB::getInfo() const {
    return info;
}

void ClassB::setInfo(const string& value) {
    info = value;
}
