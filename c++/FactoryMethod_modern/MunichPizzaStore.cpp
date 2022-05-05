#include "MunichPizzaStore.h"
#include "MunichSalamiPizza.h"
#include "MunichMagaritaPizza.h"

std::unique_ptr<Pizza> MunichPizzaStore::createPizza(std::string typ){
  if (typ == "Salami") {
    return std::make_unique<MunichSalamiPizza>();
  } else {
    return std::make_unique<MunichMagaritaPizza>();
  }
}