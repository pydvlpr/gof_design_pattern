#include<iostream>
#include<memory>
#include "Drink.h"
#include "IngredientsDecorator.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Choco.h"
#include "MilkFroth.h"


int main(){
  // auto works, but not sure it deducts Drink
  // using unique_ptr because they can easily concerted to shared_ptr
  auto drink = std::make_unique<Espresso>();
  std::cout <<  drink->getDescription() << ": " << drink->prize() << std::endl;

  // auto does not work, not deducting to class Drink automatically!
  std::unique_ptr<Drink> drink2 = std::make_unique<HouseBlend>();
  drink2 = std::make_unique<Choco>(std::move(drink2));
  std::cout << drink2->getDescription() << ": " << drink2->prize() << std::endl;

  // s.a.
  std::unique_ptr<Drink> drink3 = std::make_unique<Espresso>();
  drink3 = std::make_unique<Choco>(std::move(drink3));
  drink3 = std::make_unique<MilkFroth>(std::move(drink3));
  std::cout << drink3->getDescription() << ": " << drink3->prize() << std::endl;
}