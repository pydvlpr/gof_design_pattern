#include "PizzaStore.h"

PizzaStore::PizzaStore(std::string name){
  this->name = name;
}

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type){
  std::unique_ptr<Pizza> pizza = this->createPizza(type);
  pizza->preperation();
  pizza->backing();
  pizza->cutting();
  pizza->packing();

  return pizza;
}