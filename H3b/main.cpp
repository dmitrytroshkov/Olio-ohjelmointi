#include "animal.h"

class Dog : public Animal {
public:

    void callOut() const override {
        std::cout << "Koira haukkuu!" << std::endl;
    }


    ~Dog() override {
        std::cout << "Koira tuhoutuu." << std::endl;
    }
};

int main() {

    Animal* animal = new Animal();
    animal->callOut();  //  Eläin ääntelee.


    Animal* dog = new Dog();
    dog->callOut();  // Koira haukkuu!


    delete animal;
    delete dog;

    return 0;
}
