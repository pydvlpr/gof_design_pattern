#include "MilkFroth.h"
#include <iostream>
#include <string>

MilkFroth::MilkFroth(Drink *drink){
  this->drink = drink;
}

std::string MilkFroth::getDescription() const{
  return this->drink->getDescription() + ", milk froth";
}

double MilkFroth::prize() const{
  return .20 + drink->prize();
}