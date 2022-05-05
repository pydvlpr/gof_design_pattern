#include "Pizza.h"
#include "PizzaStore.h"
#include "MunichPizzaStore.h"
#include "BerlinPizzaStore.h"
#include "BerlinSalamiPizza.h"
#include "MunichSalamiPizza.h"

int main(){
  PizzaStore* berlinPizzaStore = new BerlinPizzaStore();
  PizzaStore* munichPizzaStore = new MunichPizzaStore();

  Pizza* pizza1 = berlinPizzaStore->orderPizza("Salami");
  Pizza* pizza2 = munichPizzaStore->orderPizza("Salami");
  Pizza* pizza3 = munichPizzaStore->orderPizza("Surprise");
  Pizza* pizza4 = berlinPizzaStore->orderPizza("Magarita");

  delete pizza1;
  delete pizza2;
  delete pizza3;
  delete pizza4;
}