package observer;

public class WeatherStatsDisplay implements ObserverInterface{
	
	private float maxTemp = 0.0f;
	private float minTemp = 0.0f;
	private float tempSum= 0.0f;
	private int numReadings;
	private SubjectInterface weatherData;

	public WeatherStatsDisplay(SubjectInterface weatherData) {
		this.weatherData = weatherData;
		this.weatherData.registerObserver(this);
	}

	public void update(float temperature, float humidity, float airpressure) {
		tempSum += temperature;
		numReadings++;

		if (temperature > maxTemp) {
			maxTemp = temperature;
		}
 
		if (temperature < minTemp) {
			minTemp = temperature;
		}

		display();
	}

	public void display() {
		System.out.format("Avg/Max/Min Temperature = %2.1f°C/%2.1f°C/%2.1f°C\n",(tempSum / numReadings),maxTemp,minTemp);
	}
}
