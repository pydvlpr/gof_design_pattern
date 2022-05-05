#ifndef PIZZASTORE_HEADER_H
#define PIZZASTORE_HEADER_H

#include<string>
#include<memory>
#include "Pizza.h"

class PizzaStore{
  public:
    PizzaStore(){}
    PizzaStore(std::string);
    ~PizzaStore() = default;

    std::unique_ptr<Pizza> orderPizza(std::string);
    std::string getName();

  protected:
    virtual std::unique_ptr<Pizza> createPizza(std::string) = 0;

  private:
    std::string name;

};

#endif