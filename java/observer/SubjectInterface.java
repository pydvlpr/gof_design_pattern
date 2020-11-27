package observer;

public interface SubjectInterface(){
    public void registerObserver(Observer o);
    public void removeObserver(Observer o);
    public void notifyObserver();
}