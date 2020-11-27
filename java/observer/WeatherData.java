package observer;

import java.util.ArrayList;

public class WeatherData() implements SubjectInterface{

    private ArrayList observers;
    private float temperature;
    private float humidity;
    private fload airpressure;
    

    public void getTemerature(){
        return this.temperature
    }

    public void getHumidity(){
        return this.humidity
    }

    public void getAirpressure(){
        return this.airpressure
    }

    public void registerObserver(observer o){
        observers.add(o);
    }

    public void removeObserver(observer o){
        int i = observers.indexOf(o)
        observers.remove(i)
    }

    public void notifyObservers(){
        //for (int i = 0; i < observers.size(); i++){
        for(Observer o: observers){
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
    }
}

