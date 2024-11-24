#include <QCoreApplication>
#include "Chef.h"
#include "ItalianChef.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Chef *chef = new Chef("Gordon Ramsay");


    chef->makeSalad();
    chef->makeSoup();


    ItalianChef *italianChef = new ItalianChef("Anthony Bourdain");


    italianChef->makeSalad();
    italianChef->makeSoup();
    italianChef->makePasta();
    qDebug() << "ItalianChef's name: " << italianChef->getName();


    delete chef;
    delete italianChef;

    return a.exec();
}
