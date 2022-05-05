#ifndef PIZZASTORE_HEADER_H
#define PIZZASTORE_HEADER_H

#include<string>
#include "Pizza.h"

class PizzaStore{
  public:
    PizzaStore(){}
    PizzaStore(std::string);
    ~PizzaStore() = default;

    Pizza* orderPizza(std::string);
    std::string getName();

  protected:
    virtual Pizza* createPizza(std::string) = 0;

  private:
    std::string name;

};

#endif