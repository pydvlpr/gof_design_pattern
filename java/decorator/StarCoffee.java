package decorator;

import decorator.Drink.Size;

public class StarCoffee {
	public static void main(String[] args){
		Drink drink = new Espresso();
		System.out.println(drink.getDescription() + " " +drink.getSize()+ " "+drink.price());
		
		drink = new HotMilk(drink);
		System.out.println(drink.getDescription() + " " +drink.getSize()+ " "+drink.price());
		
		drink = new Choco(drink);
		System.out.println(drink.getDescription() + " " +drink.getSize()+ " "+drink.price());
	
		Drink drink2 = new HouseMix();
		drink2.setSize(Size.GRANDE);
		System.out.println(drink2.getDescription() + " " +drink2.getSize()+ " "+drink2.price());
		
		drink2 = new Soja(drink2);
		System.out.println(drink2.getDescription() + " " +drink2.getSize()+ " "+drink2.price());
		
	}
}
