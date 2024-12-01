#include <iostream>
#include "Car.h"

int main() {

    Car car("BMW", "M5");


    car.setEngine();
    car.setWheels();


    car.printDetails();

    return 0;
}
