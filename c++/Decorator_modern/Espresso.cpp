#include "Espresso.h"

Espresso::Espresso(){
  this->description = "Espresso";
}

double Espresso::prize() const{
  return 1.99;
}

std::string Espresso::getDescription() const{
  return this->description;
}