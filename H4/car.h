#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>

class Car {
private:
    Engine engine;
    Wheel wheels[4];
    std::string model;
    std::string brand;

public:
    Car(std::string b, std::string m);

    void setEngine();
    void setWheels();
    void printDetails() const;
};

#endif
