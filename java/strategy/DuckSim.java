package strategy;

public class DuckSim{
 
       public static void main (String[] args){
             // Ausgabe Hello World!
             System.out.println("Duck Simulation");
             
             Duck rubber = new RubberDuck();
             rubber.doFly();
             rubber.doQuak();

             Duck mallard = new Mallard();
             mallard.doFly();
             mallard.doQuak();

             mallard.setFlightBehavior(new CannotFly());
             mallard.doFly();
       }
}
