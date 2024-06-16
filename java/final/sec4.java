package exam8.sec01;

import java.util.*;

public class sec4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<String> staff = new ArrayList<>();
		staff.add("Amy"); // add method adds an element at the end of the list
		staff.add("Bob");
		staff.add("Carl");
		ListIterator<String> iter = staff.iterator();
		String first = iter.next();
		String second = iter.next();
		iter.remove();
	}

}
