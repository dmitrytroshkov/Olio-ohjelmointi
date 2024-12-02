#include <iostream>
#include "ClassB.h"
#include "AssosiationA.h"
#include "AggregationA.h"

int main() {

    int a = 5;
    int b = 10;

    std::cout << "a:n arvo on: " << a << " ja osoite on: " << &a << std::endl;
    std::cout << "b:n arvo on: " << b << " ja osoite on: " << &b << std::endl;

    int* myPointer = &a;
    std::cout << "Pointterin osoittama osoite on: " << myPointer << std::endl;
    std::cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << std::endl;

    myPointer = &b;
    std::cout << "Pointterin osoittama osoite on: " << myPointer << std::endl;
    std::cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << std::endl;

    int& refA = a;
    std::cout << "refA osoittaa osoitteeseen on: " << &refA << std::endl;
    std::cout << "refA:n osoittaman muistipaikan arvo on: " << refA << std::endl;


    ClassB objB;
    objB.setInfo("Olion B info objB");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion info objAss");

    std::cout << "Assosiation esim:" << std::endl;
    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objAss: " << objAss.getBinfo() << std::endl;


    std::cout << "Aggregaatio esimerkki:" << std::endl;
    ClassB &refB = objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objAggr: " << objAggr.getBinfo() << std::endl;
    std::cout << std::endl;

    return 0;
}
