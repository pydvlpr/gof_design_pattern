#ifndef CHOCO_HEADER_H
#define CHOCO_HEADER_

#include<string>
#include "IngredientsDecorator.h"
#include "Drink.h"

class Choco : public IngredientsDecorator{
  public:
    Choco(Drink* drink);
    ~Choco() = default;
    double prize() const;
    std::string getDescription() const;

  private:
    Drink* drink;
};

#endif