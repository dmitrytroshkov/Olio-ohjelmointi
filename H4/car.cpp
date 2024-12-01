#include "Car.h"
#include <iostream>
using namespace std;


Car::Car(string b, string m) : brand(b), model(m) {}


void Car::setEngine() {
    engine.setHorsepower(400);
    engine.setDisplacement(4.9);
}


void Car::setWheels() {
    for (int i = 0; i < 4; ++i) {
        wheels[i].setSize(20);
        wheels[i].setType("kesärengas");
    }
}


void Car::printDetails() const {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Engine: " << endl;
    cout << "  Horsepower: " << engine.getHorsepower() << " HP" << endl;
    cout << "  Displacement: " << engine.getDisplacement() << " L" << endl;
    cout << "Wheels: " << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "  Wheel " << i + 1 << ": " << wheels[i].getSize() << " inches, "
             << wheels[i].getType() << endl;
    }
}
