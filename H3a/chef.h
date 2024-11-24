#ifndef CHEF_H
#define CHEF_H

#include <QString>
#include <QDebug>

class Chef {
public:
    Chef(const QString &name);
    ~Chef();

    void makeSalad();
    void makeSoup();

    QString getName() const;

private:
    QString m_name;
};

#endif
