package observer;

import java.util.ArrayList;

public class WeatherData implements SubjectInterface{

    private ArrayList observers;
    private float temperature;
    private float humidity;
    private float airpressure;
    
    public WeatherData() {
    	this.observers = new ArrayList();
    }

    public float getTemerature(){
        return this.temperature;
    }

    public float getHumidity(){
        return this.humidity;
    }

    public float getAirpressure(){
        return this.airpressure;
    }

    public void registerObserver(ObserverInterface o){
        observers.add(o);
    }

    public void removeObserver(ObserverInterface o){
        int i = observers.indexOf(o);
        observers.remove(i);
    }

    public void notifyObservers(){
        for (int i = 0; i < observers.size(); i++){
            ObserverInterface o = (ObserverInterface)observers.get(i);
            o.update(temperature,humidity,airpressure);
        }
    }

    public void measurementChanged(){
        notifyObservers();
    }
    
    public void setMeasurementValues(float temp, float humidity, float airpressure){
        this.temperature = temp;
        this.humidity = humidity;
        this.airpressure = airpressure;
        this.measurementChanged();
    }
}

