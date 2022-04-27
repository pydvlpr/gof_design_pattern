#include<iostream>
#include "Duck.h"
#include "FlightBehaviour.h"
#include "QuackBehaviour.h"

Mullard::Mullard(){
  this->flightBehaviour = new FlyWithWings();
  this->quackBehaviour = new NoisyQuack();
}

void Duck::setFlightBehaviour(IFlightBehaviour* flightBehaviour){
  this->flightBehaviour = flightBehaviour; 
}

void Duck::setQuackBehaviour(IQuackBehaviour* quackBehaviour){
  this->quackBehaviour = quackBehaviour;
}

void Duck::doFlight(){
  this->flightBehaviour->flight();
}

void Duck::doQuack(){
  this->quackBehaviour->quack();
}

void Mullard::display() const{
  std::cout << "I am mullard duck" << std::endl;
}

GummiDuck::GummiDuck()
{
  this->flightBehaviour = new CannotFly();
  this->quackBehaviour = new GummiQuack();
}

void GummiDuck::display() const
{
  std::cout << "I am GummiDuck." << std::endl;
}
