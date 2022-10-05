#ifndef DUCK_H
#define DUCK_H

#include <memory>

#include "FlightBehaviour.h"
#include "QuackBehaviour.h"

class Duck {
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

class Mullard : public Duck {
 public:
  Mullard();
  ~Mullard() = default;
  void display() const;
};

class GummiDuck : public Duck {
 public:
  GummiDuck();
  ~GummiDuck() = default;
  void display() const;
};

#endif