#include "Chef.h"

Chef::Chef(const QString &name) : m_name(name) {
    qDebug() << "Chef " << m_name << " konstruktori";
}

Chef::~Chef() {
    qDebug() << "Chef " << m_name << " destruktori";
}

void Chef::makeSalad() {
    qDebug() << m_name << " makes salad";
}

void Chef::makeSoup() {
    qDebug() << m_name << " makes soup";
}

QString Chef::getName() const {
    return m_name;
}
