#ifndef BERLIN_PIZZASTORE_HEADER_H
#define BERLIN_PIZZASTORE_HEADER_H

#include "PizzaStore.h"

class BerlinPizzaStore : public PizzaStore{
  public:
    BerlinPizzaStore(){}
    ~BerlinPizzaStore() =default;
    std::unique_ptr<Pizza> createPizza(std::string);
};

#endif