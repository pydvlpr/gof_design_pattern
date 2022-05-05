#ifndef MILKFROTH_HEADER_H
#define MILKFROTH_HEADER_H

#include <string>
#include "IngredientsDecorator.h"
#include "Drink.h"

class MilkFroth : public IngredientsDecorator
{
public:
  MilkFroth(Drink *drink);
  ~MilkFroth() = default;
  double prize() const;
  std::string getDescription() const;

private:
  Drink *drink;
};

#endif