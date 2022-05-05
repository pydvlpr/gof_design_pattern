#include "BerlinPizzaStore.h"
#include "BerlinSalamiPizza.h"
#include "BerlinMagaritaPizza.h"

Pizza* BerlinPizzaStore::createPizza(std::string typ){
  if(typ == "Salami") {
    return new BerlinSalamiPizza();
  } else {
    return new BerlinMagaritaPizza();
  }
}