#include<iostream>
#include "Duck.h"
#include "FlightBehaviour.h"
#include "QuackBehaviour.h"

int main(int argc, char* argv[]){
  Mullard* m = new Mullard();
  m->display();
  m->doFlight();
  m->doQuack();

  std::cout << "\n";

  m->setFlightBehaviour(new RocketFlight());
  m->doFlight();
  m->setQuackBehaviour(new GummiQuack());
  m->doQuack();

  std::cout << "\n";

  GummiDuck* g = new GummiDuck();
  g->display();
  g->doFlight();
  g->doQuack();


}