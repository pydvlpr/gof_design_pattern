package strategy;

public abstract class Duck{
    InterfaceFlightBehavior flightBehavior;
    InterfaceQuakBehavior quakBehavior;

    public Duck(){

    }

    public void doFly(){
        flightBehavior.fly();
    }

    public void doQuak(){
        quakBehavior.quak();
    }

    public void  swim(){
        System.out.println("swimming along");
    }

    public void setFlightBehavior(InterfaceFlightBehavior fb){
        flightBehavior = fb;
    }

    public void setQuakBehavior(InterfaceQuakBehavior qb){
        quakBehavior = qb;
    }

}
