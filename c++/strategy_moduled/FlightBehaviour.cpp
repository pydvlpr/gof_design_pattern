module;

#include<iostream>

export module strategy.flightbehavior;

export class IFlightBehaviour{
public:
  IFlightBehaviour() {}
  ~IFlightBehaviour() = default;
  virtual void flight() = 0;
};

export class FlyWithWings : public IFlightBehaviour{
public:
  void flight();
};

void FlyWithWings::flight(){
  std::cout << "Flying with wings, flap flap." << std::endl;
}

export class RocketFlight : public IFlightBehaviour{
public:
  void flight();
};

void RocketFlight::flight(){
  std::cout << "Flying with rocket power." << std::endl;
}

export class CannotFly : public IFlightBehaviour{
public:
  void flight();
};

void CannotFly::flight(){
  std::cout << "Cannot fly, just swimming." << std::endl;
}