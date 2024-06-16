package exam8.sec01;

import java.util.*;

public class sec3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Collection<String> c = new ArrayList<>();
		c.add("Hello");
		c.add("World");
		
		Iterator<String> it = c.iterator();
		Iterator<String> itTwo = c.iterator();
		while(it.hasNext()) {
		String n = it.next();
		System.out.println(n);
		it.remove();
		it.remove();
		}
		for(String e : c) {
			System.out.println(e);
		}
	}

}
