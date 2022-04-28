#include<iostream>
#include "CurrentConditionsDisplay.h"
#include "ObserverInterfaces.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(ISubject* weatherData){
  this->weatherData = weatherData;
  weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::display() const{
  std::cout << "\nCurrent Weather Conditions:" << std::endl;
  std::cout << "Temperature: " << this->temperature << " C " << std::endl;
  std::cout << "Humidity: " << this->humidity << " %" << std::endl;
  std::cout << "Pressure: " << this->pressure << std::endl;
}

void CurrentConditionsDisplay::update(float temperature, 
                                      float humidity, float pressure){
  this->temperature = temperature;
  this->humidity = humidity;
  this->pressure = pressure;
  this->display();
}
