#include "Drink.h"

Drink::Drink(){
  this->description = "Unknown drink";
}

std::string Drink::getDescription() const{
  return this->description;
}


