#include "MunichMagaritaPizza.h"

MunichMagaritaPizza::MunichMagaritaPizza()
{
  this->name = "Magarita pizza Munich style ";
  this->dough = "Italy style pizza crust";
  this->sauce = "Classic tomato sauce";

  this->toppings.push_back("Grated parmesan");
  this->toppings.push_back("Oregano");
}