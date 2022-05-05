#include<iostream>
#include "Drink.h"
#include "IngredientsDecorator.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Choco.h"
#include "MilkFroth.h"


int main(){
  Drink* drink = new Espresso();
  std::cout <<  drink->getDescription() << ": " << drink->prize() << std::endl;

  Drink* drink2 = new HouseBlend();
  drink2 = new Choco(drink2);
  std::cout << drink2->getDescription() << ": " << drink2->prize() << std::endl;

  Drink* drink3 = new Espresso();
  drink3 = new MilkFroth(drink3);
  drink3 = new Choco(drink3);
  std::cout << drink3->getDescription() << ": " << drink3->prize() << std::endl;
}