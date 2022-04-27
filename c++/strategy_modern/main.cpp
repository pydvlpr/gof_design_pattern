#include<iostream>
#include "Duck.h"
#include "FlightBehaviour.h"
#include "QuackBehaviour.h"

int main(int argc, char* argv[]){
  auto m =std::make_unique<Mullard>();
  m->display();
  m->doFlight();
  m->doQuack();

  std::cout << "\n";

  m->setFlightBehaviour(std::make_shared<RocketFlight>());
  m->display();
  m->doFlight();
  m->setQuackBehaviour(std::make_shared<GummiQuack>());
  m->doQuack();

  std::cout << "\n";
  
  auto g = std::make_unique<GummiDuck>();
  g->display();
  g->doFlight();
  g->doQuack();
}