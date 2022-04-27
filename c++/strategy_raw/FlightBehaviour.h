#ifndef FLIGHTBEHAVIOUR_H
#define FLIGHTBEHAVIOUR_H

class IFlightBehaviour{
  public:
    IFlightBehaviour(){}
    ~IFlightBehaviour()=default;
    virtual void flight() = 0;
};

class FlyWithWings : public IFlightBehaviour{
  public:
    void flight();
};

class RocketFlight : public IFlightBehaviour{
  public:
    void flight();
};

class CannotFly : public IFlightBehaviour
{
public:
  void flight();
};

#endif