#include "MunichPizzaStore.h"
#include "MunichSalamiPizza.h"
#include "MunichMagaritaPizza.h"

Pizza *MunichPizzaStore::createPizza(std::string typ){
  if (typ == "Salami") {
    return new MunichSalamiPizza();
  } else {
    return new MunichMagaritaPizza();
  }
}