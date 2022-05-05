#include "Choco.h"
#include<iostream>
#include<string>

Choco::Choco(std::unique_ptr<Drink> drink){
  this->drink = std::move(drink);  
}

std::string Choco::getDescription() const{
  return this->drink->getDescription() + ", chocolate";
}

double Choco::prize() const{
  return .20 + this->drink->prize();
}