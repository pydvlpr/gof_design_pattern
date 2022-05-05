#include "MunichSalamiPizza.h"

MunichSalamiPizza::MunichSalamiPizza()
{
  this->name = "Salami pizza Munich style ";
  this->dough = "Italy style pizza crust";
  this->sauce = "Classic tomato sauce";

  this->toppings.push_back("Grated parmesan");
  this->toppings.push_back("North italy salami slices");
}