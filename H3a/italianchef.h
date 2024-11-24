#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(const QString &name);
    ~ItalianChef();

    QString getName();
    void makePasta();
};

#endif
