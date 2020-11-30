package observer;

public class WeatherStation {
	public static void main(String[] args) {
		WeatherData weatherData = new WeatherData();
		
		CurrentConditionsDisplay currentDisplay = new CurrentConditionsDisplay(weatherData);
		WeatherStatsDisplay weatherStatsDisplay = new WeatherStatsDisplay(weatherData);
		WeatherForecastDisplay weatheerForecastDisplay = new WeatherForecastDisplay(weatherData);
		
		weatherData.setMeasurementValues(30, 65, 30.4f);
		weatherData.setMeasurementValues(35, 55, 32.4f);
		weatherData.setMeasurementValues(30, 80, 28.5f);
		
	}
}
