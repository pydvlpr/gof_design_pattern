#include <iostream>
#include "FlightBehaviour.h"

void FlyWithWings::flight(){
  std::cout << "Flying with wings, flap flap." << std::endl;
}

void RocketFlight::flight(){
  std::cout << "Flying with rocket power." << std::endl;
}

void CannotFly::flight(){
  std::cout << "Cannot fly, just swimming." << std::endl;
}