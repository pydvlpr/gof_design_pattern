#ifndef OBSERVER_INTERFACES_H
#define OBSERVER_INTERFACES_H

class IObserver{
  public:
    IObserver() {}
    ~IObserver() = default;
    virtual void update(float temperature, float humity, float pressure) = 0;
};

class ISubject{
public:
  ISubject() {}
  virtual ~ISubject() = default;
  virtual void registerObserver(IObserver *) = 0;
  virtual void removeObserver(IObserver *) = 0;
  virtual void notifyObservers() = 0;
};

class IDisplayElement{
  public:
    IDisplayElement(){}
    ~IDisplayElement() = default;
    virtual void display() const = 0;  
};

#endif