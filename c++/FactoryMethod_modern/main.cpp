#include "Pizza.h"
#include "PizzaStore.h"
#include "MunichPizzaStore.h"
#include "BerlinPizzaStore.h"
#include "BerlinSalamiPizza.h"
#include "MunichSalamiPizza.h"

int main(){
  auto berlinPizzaStore = std::make_unique<BerlinPizzaStore>();
  auto munichPizzaStore = std::make_unique<MunichPizzaStore>();

  auto pizza1 = berlinPizzaStore->orderPizza("Salami");
  auto pizza2 = munichPizzaStore->orderPizza("Salami");
  auto pizza3 = munichPizzaStore->orderPizza("Surprise");
  auto pizza4 = berlinPizzaStore->orderPizza("Magarita");

}