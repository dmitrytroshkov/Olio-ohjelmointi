#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    void setBrand(string b) {
        brand = b;
    }

    void setModel(string m) {
        model = m;
    }

    void setYearModel(int y) {
        yearModel = y;
    }

    void printData() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
    }
};

int main() {
    // Luo Car-olio ja aseta arvot
    Car* car = new Car();
    car->setBrand("BMW");
    car->setModel("M5");
    car->setYearModel(2017);

    // Tulosta auton tiedot
    car->printData();

    delete car; // Vapauta muisti
    return 0;
}
