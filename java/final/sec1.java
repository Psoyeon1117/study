package exam8.sec01;

public class sec1 {

	public static void main(String[] args) {
//		Pair<String> buddy = new Pair<>("hello", "world");	//parameter->raw
//		Pair rawBuddy = buddy;
		Pair rawBuddy = new Pair();	//raw -> parameter
		Pair<String> buddy = rawBuddy;
		
	}

}

class Pair<T> {
	private T first;
	private T second;
	public Pair() { first = null; second = null; }
	public Pair(T first, T second) { this.first = first; this.second = second; }
	public T getFirst() { return first; }
	public T getSecond() { return second; }
	public void setFirst(T newValue) { first = newValue; }
	public void setSecond(T newValue) { second = newValue; }
}
