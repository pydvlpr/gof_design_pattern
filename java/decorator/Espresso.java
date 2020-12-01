package decorator;

public class Espresso extends Drink{
	public Espresso(){
		description = "Espresso";
	}
	
	public double price(){
		return 1.99;
	}
}
