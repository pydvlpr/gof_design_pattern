#include "WeatherStation.h"
#include "CurrentConditionsDisplay.h"
#include "WeatherStatsDisplay.h"

int main(int argc, char* []){
  WeatherStation* weatherStation = new WeatherStation();
  CurrentConditionsDisplay* currentConditionsDisplay = new CurrentConditionsDisplay(weatherStation);
  WeatherStatsDisplay* weatherStatsDisplay = new WeatherStatsDisplay(weatherStation);

  weatherStation->setMeasurementValues(15, 45, 23.4f);
  weatherStation->setMeasurementValues(30, 65, 30.4f);
  weatherStation->setMeasurementValues(32, 70, 29.2f);
  weatherStation->setMeasurementValues(28, 90, 29.2f);

}