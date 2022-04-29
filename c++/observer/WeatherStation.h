#ifndef WEATHER_STATION_H
#define WEATHER_STATION_H

#include<list>
#include "ObserverInterfaces.h"

class WeatherStation : public ISubject{
  private:
    std::list<IObserver*> observers;
    float temperature;
    float humidity;
    float pressure;

  public:
    WeatherStation(){}
    ~WeatherStation() = default;
    void registerObserver(IObserver *observer);
    void removeObserver(IObserver *observer);
    void notifyObservers();
    void setMeasurementValues(float temperature, float humidity, float pressure);
    void measurementChanged();
};

#endif