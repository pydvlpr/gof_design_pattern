#ifndef CURRENT_CONDITIONS_DISPLAY_H
#define CURRENT_CONDITIONS_DISPLAY_H

#include "ObserverInterfaces.h"

class CurrentConditionsDisplay : public IObserver, public IDisplayElement{
  private:
    ISubject* weatherData;
    float temperature;
    float humidity;
    float pressure;

  public:
    CurrentConditionsDisplay(ISubject* weatherData);
    ~CurrentConditionsDisplay() = default;
    void display() const;
    void update(float temperature, float humity, float pressure);
};

#endif