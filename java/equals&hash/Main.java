package firstProject;

import java.util.*;

public class Main {
	public static void main(String[] args)
	{
	Employee alice1 = new Employee
	("Alice Adams", 75000, 1987, 12, 15);
	Employee alice2 = alice1;
	Employee alice3 = new Employee
	("Alice Adams", 75000, 1987, 12, 15);
	Employee bob = new Employee
	("Bob Brandson", 50000, 1989, 10, 1);
	System.out.println("alice1 == alice2:"
	+ (alice1 == alice2));
	System.out.println("alice1 == alice3:"
	+ (alice1 == alice3));
	System.out.println("alice1.equals(alice3):"
	+ alice1.equals(alice3));
	System.out.println("alice1.equals(bob):"
	+ alice1.equals(bob));
	System.out.println("bob.toString(): " + bob);
	Manager carl = new Manager("Carl Cracker", 80000, 1987, 12, 15);
	Manager boss = new Manager("Carl Cracker", 80000, 1987, 12, 15);
	boss.setBonus(5000);
	System.out.println("boss.toString(): " + boss);
	System.out.println("carl.toString(): " + carl);
	System.out.println("carl.equals(boss): " + carl.equals(boss)); //둘의 보너스가 다름
	System.out.println("alice1.hashCode(): " + alice1.hashCode()); //employee의 hashcode()를 불러온다.
	System.out.println("alice3.hashCode(): " + alice3.hashCode()); //name,salary,hireday로 해쉬코드를 만듦
	System.out.println("bob.hashCode(): " + bob.hashCode());
	System.out.println("carl.hashCode(): " + carl.hashCode());
	
	
	System.out.println("----------------------------");
	//-------------------------------------------------//
	ArrayList<Employee> staff = new ArrayList<>(); // fill the staff array list
	staff.add(new Employee("Carl Cracker", 75000, 1987, 12, 15));
	staff.add(new Employee("Harry Hacker", 50000, 1989, 10, 1));
	staff.add(new Employee("Tony Tester", 40000, 1990, 3, 15));
	for (Employee e : staff)
	e.raiseSalary(5); // raise everyone's salary by 5%
	for (Employee e : staff) // printout all information about all Employee objects
	System.out.println("name=" + e.getName() + ",salary=" + e.getSalary()
	+ ",hireDay="+ e.getHireDay());
	} // end of main()
}
