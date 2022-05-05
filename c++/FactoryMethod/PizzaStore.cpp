#include "PizzaStore.h"

PizzaStore::PizzaStore(std::string name){
  this->name = name;
}

Pizza* PizzaStore::orderPizza(std::string type){
  Pizza* pizza = this->createPizza(type);
  pizza->preperation();
  pizza->backing();
  pizza->cutting();
  pizza->packing();

  return pizza;
}