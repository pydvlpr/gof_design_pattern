#include "Pizza.h"

void Pizza::preperation() const{
  std::cout << "\n--- Your order: " << this->name << " ---" << std::endl;
  std::cout << "Prepare " + this->getName() << std::endl;
  std::cout << "Throw dough up in the air..." << std::endl;
  std::cout << "adding sauce..." << std::endl;
  std::cout << "adding toppings..." << std::endl;
  for(auto t : this->toppings){
    std::cout << " " << t << std::endl;
  }
}

void Pizza::backing() const{
  std::cout << "Backing 25 minutes" << std::endl;
}

void Pizza::cutting() const{
  std::cout << "Cutting pizza into pieces." << std::endl;
}

void Pizza::packing() const{
  std::cout << "Packing pizza into pizza box" << std::endl;
}

std::string Pizza::getName() const{
  return this->name;
}
