package firstProject;

import java.time.*;
import java.util.Objects;

public class Employee {
	private String name;
	private double salary;
	private LocalDate hireDay;

	public Employee(String name, double salary, int year, int month, int day) {
		this.name = name;
		this.salary = salary;
		hireDay = LocalDate.of(year, month, day);
	}

	public String getName() {
		return name;
	}

	public double getSalary() {
		return salary;
	}

	public LocalDate getHireDay() {
		return hireDay;
	}

	public void raiseSalary(double byPercent) {
		double raise = salary * byPercent / 100;
		salary += raise;
	}

	public boolean equals(Object otherObject) {
		// a quick test to
		if
		(this == otherObject) return true;
		if
		(otherObject == null) return false;
		// to test class match
		if(getClass() != otherObject.getClass()) return false;
		// now otherObject is a non-null Employee
		Employee other = (Employee) otherObject; //test field by field
		return Objects.equals(name, other.name)
		&& salary == other.salary
		&& Objects.equals
		(hireDay, other.hireDay);
		}

	public int hashCode() {
		return Objects.hash(name, salary, hireDay);
		/**objects의 hash메소드에서 hashcode()를 리턴한다.
		*hash()는 파라미터 값의 수 제한이 없다.
		*/
	}

	public String toString() {
		return getClass().getName() + "[name=" + name + ",salary=" + salary + ",hireDay=" + hireDay + "]";
	} // end of ToString
} // End of Employee