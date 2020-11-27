package strategy;

public class RubberDuck extends Duck {
    
    public RubberDuck(){
        this.show();
        flightBehavior = new CannotFly();
        quakBehavior = new Squeaker();
    }

    public void show(){
        System.out.println("I'm a rubber duck.");
    }
}