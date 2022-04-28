#include "WeatherStation.h"
#include "ObserverInterfaces.h"

void WeatherStation::registerObserver(IObserver *observer){
  this->observers.push_back(observer);
}

void WeatherStation::removeObserver(IObserver *observer){
  this->observers.remove(observer);
}

void WeatherStation::notifyObservers(){
  for (auto observer : this->observers)
  {
    observer->update(this->temperature, this->humidity, this->pressure);
  }
}

void WeatherStation::setMeasurementValues(float temperature,
                                          float humidity, float pressure){
  this->temperature = temperature;
  this->humidity = humidity;
  this->pressure = pressure;
  this->notifyObservers();
}

void WeatherStation::measurementChanged(){
  this->notifyObservers();
}