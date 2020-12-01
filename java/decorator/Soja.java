package decorator;

public class Soja extends IngredientsDecorator{
	Drink drink;
	
	public Soja(Drink drink){
		this.drink = drink;
	}
	
	public String getDescription() {
		return drink.getDescription()+ ", Soja";
	}
	
	public double price(){
		double price = drink.price();
		
		if (drink.getSize()== Size.TALL){
			price += 0.10;
		}else if(drink.getSize()== Size.GRANDE){
			price += 0.15;
		}else if(drink.getSize()== Size.VENTI){
			price += 0.20;
		}
		return price;
	}
	public Size getSize(){
		return drink.getSize();
	}
	public void setSize(Size size){
		this.size=size;
	}
}