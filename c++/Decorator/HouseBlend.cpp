#include "HouseBlend.h"

HouseBlend::HouseBlend(){
  this->description = "House Blend";
}

double HouseBlend::prize() const{
  return 0.89;
}

std::string HouseBlend::getDescription() const{
  return this->description;
}