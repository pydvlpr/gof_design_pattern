package strategy;

public class CannotFly implements InterfaceFlightBehavior{
    public void fly(){
        System.out.println("Can not fly.");
    }
}
