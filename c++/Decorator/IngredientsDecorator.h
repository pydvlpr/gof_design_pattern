#ifndef INGREDIENTS_DECORATOR_HEADER_H
#define INGREDIENTS_DECORATOR_HEADER_H

#include "Drink.h"

#include<string>

class IngredientsDecorator : public Drink{
  public:
    virtual std::string getDescription() const = 0;
};

#endif
