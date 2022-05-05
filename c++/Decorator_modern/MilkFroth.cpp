#include "MilkFroth.h"
#include <iostream>
#include <string>

MilkFroth::MilkFroth(std::unique_ptr<Drink> drink){
  this->drink = std::move(drink);
}

std::string MilkFroth::getDescription() const{
  return this->drink->getDescription() + ", milk froth";
}

double MilkFroth::prize() const{
  return .20 + drink->prize();
}