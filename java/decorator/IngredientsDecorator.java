package decorator;

public abstract class IngredientsDecorator extends Drink {
	public Drink drink;
	public abstract String getDescription();
	
	public Size getSize(){
		return drink.getSize();
	};
	
	public abstract void setSize(Size size);
}
