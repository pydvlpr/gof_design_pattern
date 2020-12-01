package decorator;

public class HotMilk extends IngredientsDecorator{
	Drink drink;
	
	public HotMilk(Drink drink){
		this.drink = drink;
	}
	
	public String getDescription() {
		return drink.getDescription()+ ", Hot Milk";
	}
	
	public double price(){
		size = drink.getSize();
		double price = 0.0;
		
		if (size.toString() == "TALL"){
			price = 0.10;
		}else if(size.toString() == "GRANDE"){
			price = 0.15;
		}else if(size.toString() == "VENTI"){
			price = 0.20;
		}
		return price + drink.price();
	}
	public Size getSize(){
		return drink.getSize();
	}
	public void setSize(Size size){
		this.size=size;
	}
}
