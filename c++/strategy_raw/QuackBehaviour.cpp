#include<iostream>
#include "QuackBehaviour.h"

void NoisyQuack::quack(){
  std::cout << "QUAAK QUAAAAK" << std::endl;
}

void GummiQuack::quack(){
  std::cout << "Queek, queek" << std::endl;
}