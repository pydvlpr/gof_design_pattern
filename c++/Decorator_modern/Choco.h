#ifndef CHOCO_HEADER_H
#define CHOCO_HEADER_

#include<string>
#include<memory>
#include "IngredientsDecorator.h"
#include "Drink.h"

class Choco : public IngredientsDecorator{
  public:
    Choco(std::unique_ptr<Drink> drink);
    ~Choco() = default;
    double prize() const;
    std::string getDescription() const;

  private:
    std::unique_ptr<Drink> drink;
};

#endif