module;

#include<iostream>

export module strategy.quackbehavior;

export class IQuackBehaviour{
public:
  IQuackBehaviour() {}
  ~IQuackBehaviour() = default;
  virtual void quack() = 0;
};

export class NoisyQuack : public IQuackBehaviour{
public:
  void quack();
};

export class GummiQuack : public IQuackBehaviour{
public:
  void quack();
};

void NoisyQuack::quack(){
  std::cout << "QUAAK QUAAAAK" << std::endl;
}

void GummiQuack::quack(){
  std::cout << "Queek, queek" << std::endl;
}