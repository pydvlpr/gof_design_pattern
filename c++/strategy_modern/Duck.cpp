#include<iostream>
#include "Duck.h"
#include "FlightBehaviour.h"
#include "QuackBehaviour.h"

void Duck::setFlightBehaviour(std::shared_ptr<IFlightBehaviour> flightBehaviour) {
  this->flightBehaviour = flightBehaviour; 
}

void Duck::setQuackBehaviour(std::shared_ptr<IQuackBehaviour> quackBehaviour) {
  this->quackBehaviour = quackBehaviour;
}

void Duck::doFlight() const{
  this->flightBehaviour->flight();
}

void Duck::doQuack() const{
  this->quackBehaviour->quack();
}

Mullard::Mullard(){
  this->flightBehaviour = std::make_unique<FlyWithWings>();
  this->quackBehaviour = std::make_unique<NoisyQuack>();
}

void Mullard::display() const{
  std::cout << "I am mullard duck" << std::endl;
}

GummiDuck::GummiDuck(){
  this->flightBehaviour = std::make_unique<CannotFly>();
  this->quackBehaviour = std::make_unique<GummiQuack>();
}

void GummiDuck::display() const{
  std::cout << "I am GummiDuck." << std::endl;
}
