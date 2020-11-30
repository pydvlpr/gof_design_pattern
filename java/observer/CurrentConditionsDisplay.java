package observer;

public class CurrentConditionsDisplay implements ObserverInterface,DisplayInterface{

	private float temperature;
	private float humidity;
	private float airpressure;
	private SubjectInterface weatherData;
	
	public CurrentConditionsDisplay(SubjectInterface weatherData) {
		this.weatherData = weatherData;
		this.weatherData.registerObserver(this);
	}
	
	@Override
	public void update(float temp, float humidity, float airpressure) {
		this.temperature = temp;
		this.humidity = humidity;
		this.airpressure = airpressure;
		display();
	}

	@Override
	public void display() {
		System.out.println("Current Conditions: ");
		System.out.format("Temperature: %2.1f°C\n",temperature);
		System.out.format("Humidity: %2.0f%%\n",humidity);
		System.out.format("Airpressure: %2.0f Pa\n",airpressure);
	}
}
