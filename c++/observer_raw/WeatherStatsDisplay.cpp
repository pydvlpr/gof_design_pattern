#include <iostream>
#include "WeatherStatsDisplay.h"
#include "ObserverInterfaces.h"

WeatherStatsDisplay::WeatherStatsDisplay(ISubject *weatherData){
  this->minTemperature = 100;
  this->weatherData = weatherData;
  weatherData->registerObserver(this);
}

void WeatherStatsDisplay::display() const{
  std::cout << "\nWeather Statistic from " << this->sumStats << " days" << std::endl;
  std::cout << "Maximum temperature: " << this->maxTemperature << " C " << std::endl;
  std::cout << "Minimum temperature: " << this->minTemperature << " C " << std::endl;
  std::cout << "Average temperature: " << this->avgTemperature << " C " << std::endl;
}

void WeatherStatsDisplay::update(float temperature,
                                 float humidity, float pressure){
  
  this->sumStats += 1;
  this->sumTemperature += temperature;
  this->avgTemperature = this->sumTemperature/this->sumStats;

  if ( temperature > this->maxTemperature){
    this->maxTemperature = temperature;
  }

  if( temperature < this->minTemperature){
    this->minTemperature = temperature;
  }

  this->display();
}
