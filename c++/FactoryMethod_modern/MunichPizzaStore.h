#ifndef MUNICH_PIZZASTORE_H
#define MUNICH_PIZZASTORE_H

#include "PizzaStore.h"

class MunichPizzaStore : public PizzaStore{
public:
  MunichPizzaStore() {}
  ~MunichPizzaStore() = default;
  std::unique_ptr<Pizza> createPizza(std::string);
};

#endif