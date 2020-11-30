package observer;

public interface SubjectInterface {
	public void registerObserver(ObserverInterface b);
	public void removeObserver(ObserverInterface b);
	public void notifyObservers();
	
}

