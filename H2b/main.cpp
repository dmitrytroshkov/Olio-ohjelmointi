#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car {
private:
    string brand;      // Auton merkki
    string model;      // Auton malli
    int yearModel;     // Auton valmistusvuosi

public:
    // Konstruktori
    Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

    // Metodi auton tietojen tulostamiseen
    void printData() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
    }
};

int main() {
    // Luo vektori, joka sisältää Car-objekteja
    vector<Car> carList;

    // Luo kolme autoa ja lisää ne vektoriin
    carList.push_back(Car("Mercedes", "e500", 1996));
    carList.push_back(Car("Audi", "RS4", 2007));
    carList.push_back(Car("BMW", "M5", 2017));

    // Tulosta toisen auton tiedot
    cout << "Second car details:" << endl;
    carList[1].printData();

    // Tulosta kaikkien autojen tiedot for-silmukalla
    cout << "\nAll car details:" << endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
