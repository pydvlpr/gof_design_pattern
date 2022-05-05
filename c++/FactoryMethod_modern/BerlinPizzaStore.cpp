#include "BerlinPizzaStore.h"
#include "BerlinSalamiPizza.h"
#include "BerlinMagaritaPizza.h"

std::unique_ptr<Pizza> BerlinPizzaStore::createPizza(std::string typ){
  if(typ == "Salami") {
    return std::make_unique<BerlinSalamiPizza>();
  } else {
    return std::make_unique<BerlinMagaritaPizza>();
  }
}