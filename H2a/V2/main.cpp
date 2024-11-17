#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    double getArea() {
        return width * height;
    }

    double getCircum() {
        return 2 * (width + height);
    }
};

int main() {
    // Luo Rectangle-olio ja aseta arvot
    Rectangle* rect = new Rectangle();
    rect->setWidth(5.0);
    rect->setHeight(10.0);

    // Tulosta suorakulmion pinta-ala ja ympärysmitta
    cout << "Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;

    delete rect; // Vapauta muisti
    return 0;
}
