package observer;

public class WeatherForecastDisplay implements ObserverInterface{
	private float currentPressure = 29.92f;  
	private float lastPressure;
	private SubjectInterface weatherData;

	public WeatherForecastDisplay(SubjectInterface weatherData) {
		this.weatherData =weatherData;
		this.weatherData.registerObserver(this);
	}

	public void update(float temperature, float humidity, float airpressure) {
        lastPressure = currentPressure;
		currentPressure = airpressure;

		display();
	}

	public void display() {
		System.out.print("Forecast: ");
		if (currentPressure > lastPressure) {
			System.out.println("Better weather in sight!");
		} else if (currentPressure == lastPressure) {
			System.out.println("It stays the way it is.");
		} else if (currentPressure < lastPressure) {
			System.out.println("Cool, rainy weather.");
		}
	}

}
