#ifndef WEATHER_STATS_DISPLAY_H
#define WEATHER_STATS_DISPLAY_H

#include "ObserverInterfaces.h"

class WeatherStatsDisplay : public IObserver, public IDisplayElement
{
private:
  ISubject *weatherData;
  float maxTemperature;
  float minTemperature;
  float avgTemperature;
  float sumTemperature;
  unsigned int sumStats;

public:
  WeatherStatsDisplay(ISubject *weatherData);
  ~WeatherStatsDisplay() = default;
  void display() const;
  void update(float temperature, float humity, float pressure);
};

#endif