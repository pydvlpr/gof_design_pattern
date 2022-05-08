module;

#include <memory>
#include <iostream>

export module strategy.ducks;

import strategy.flightbehavior;
import strategy.quackbehavior;

export class Duck
{
public:
  Duck() {}
  ~Duck() = default;
  std::shared_ptr<IFlightBehaviour> flightBehaviour;
  std::shared_ptr<IQuackBehaviour> quackBehaviour;
  void setFlightBehaviour(std::shared_ptr<IFlightBehaviour>);
  void setQuackBehaviour(std::shared_ptr<IQuackBehaviour>);
  void doFlight() const;
  void doQuack() const;
};

void Duck::setFlightBehaviour(std::shared_ptr<IFlightBehaviour> flightBehaviour){
  this->flightBehaviour = flightBehaviour;
}

void Duck::setQuackBehaviour(std::shared_ptr<IQuackBehaviour> quackBehaviour){
  this->quackBehaviour = quackBehaviour;
}

void Duck::doFlight() const{
  this->flightBehaviour->flight();
}

void Duck::doQuack() const{
  this->quackBehaviour->quack();
}

export class Mullard : public Duck{
public:
  Mullard();
  ~Mullard() = default;
  void display() const;
};

Mullard::Mullard(){
  this->flightBehaviour = std::make_shared<FlyWithWings>();
  this->quackBehaviour = std::make_shared<NoisyQuack>();
}

void Mullard::display() const{
  std::cout << "I am mullard duck" << std::endl;
}


export class GummiDuck : public Duck{
public:
  GummiDuck();
  ~GummiDuck() = default;
  void display() const;
};

GummiDuck::GummiDuck(){
  this->flightBehaviour = std::make_shared<CannotFly>();
  this->quackBehaviour = std::make_shared<GummiQuack>();
}

void GummiDuck::display() const{
  std::cout << "I am GummiDuck." << std::endl;
}