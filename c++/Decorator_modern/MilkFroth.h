#ifndef MILKFROTH_HEADER_H
#define MILKFROTH_HEADER_H

#include <string>
#include<memory>
#include "IngredientsDecorator.h"
#include "Drink.h"

class MilkFroth : public IngredientsDecorator
{
public:
  MilkFroth(std::unique_ptr<Drink> drink);
  ~MilkFroth() = default;
  double prize() const;
  std::string getDescription() const;

private:
  std::unique_ptr<Drink> drink;
};

#endif