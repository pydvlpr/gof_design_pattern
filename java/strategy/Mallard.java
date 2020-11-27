package strategy;

public class Mallard extends Duck {
    
    public Mallard(){
        this.show();
        flightBehavior = new FlyWithWings();
        quakBehavior = new Quaker();
    }

    public void show(){
        System.out.println("I'm a mallard.");
    }
}
