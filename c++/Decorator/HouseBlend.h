#ifndef HOUSEBLEND_HEADER_H
#define HOUSEBLEND_HEADER_H

#include<string>
#include "Drink.h"

class HouseBlend : public Drink{
  public:
    HouseBlend();
    ~HouseBlend() = default;
    double prize() const;
    std::string getDescription() const;
};

#endif