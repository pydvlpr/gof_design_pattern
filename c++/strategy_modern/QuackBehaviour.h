#ifndef QUACK_BEHAVIOUR_H
#define QUACK_BEHAVIOUR_H

class IQuackBehaviour{
  public:
  IQuackBehaviour(){}
  ~IQuackBehaviour() = default;
    virtual void quack() = 0;
};

class NoisyQuack : public IQuackBehaviour{
  public:
    void quack();
};

class GummiQuack : public IQuackBehaviour{
  public:
    void quack();
};

#endif