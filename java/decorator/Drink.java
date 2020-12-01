package decorator;

public abstract class Drink {
	public enum Size { TALL, GRANDE, VENTI};
	Size size = Size.TALL;
	String description = "Unbekanntes Getränk";
	
	public String getDescription(){
		return description;
	}
	
	public void setSize(Size size){
		this.size = size;
	}
	
	public Size getSize(){
		return this.size;
	}
	
	public abstract double price();

}

