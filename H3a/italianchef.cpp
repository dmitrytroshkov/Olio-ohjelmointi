#include "ItalianChef.h"

ItalianChef::ItalianChef(const QString &name) : Chef(name) {
    qDebug() << "ItalianChef " << name << " konstruktori";
}

ItalianChef::~ItalianChef() {
    qDebug() << "ItalianChef destruktori";
}

QString ItalianChef::getName() {
    return Chef::getName();
}

void ItalianChef::makePasta() {
    qDebug() << "ItalianChef " << getName() << " makes pasta";
}
