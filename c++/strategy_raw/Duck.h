#ifndef DUCK_H
#define DUCK_H

#include "FlightBehaviour.h"
#include "QuackBehaviour.h"

class Duck{
  public:
    Duck(){} 
    ~Duck() = default;
    IFlightBehaviour* flightBehaviour;
    IQuackBehaviour* quackBehaviour;
    void display();
    void setFlightBehaviour(IFlightBehaviour*);
    void setQuackBehaviour(IQuackBehaviour *);
    void doFlight();
    void doQuack();
};

class Mullard : public Duck {
  public:
    Mullard();
    ~Mullard() = default;
    void display() const;

};

class GummiDuck : public Duck
{
public:
  GummiDuck();
  ~GummiDuck() = default;
  void display() const;
};

#endif