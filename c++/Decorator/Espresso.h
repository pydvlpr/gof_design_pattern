#ifndef ESPRESSO_HEADER_H
#define ESPRESSO_HEADER_H

#include<string>
#include "Drink.h"

class Espresso : public Drink{
  public:
    Espresso();
    ~Espresso();
    double prize() const;
    std::string getDescription() const;
};

#endif