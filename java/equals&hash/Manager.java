package firstProject;

public class Manager extends Employee {
	private double bonus;

	public Manager(String name, double salary, int year, int month, int day) {
		super(name, salary, year, month, day);
		bonus = 0;
	}

	public double getSalary() {
		double baseSalary = super.getSalary();
		return baseSalary + bonus;
	}

	public void setBonus(double bonus) {
		this.bonus = bonus;
	}

	public boolean equals(Object otherObject) {
		if (!super.equals(otherObject))
			return false;
		Manager other = (Manager) otherObject;
// super.equals compare class of this and other
		return bonus == other.bonus;
	}

	public int hashCode() {
		return super.hashCode() + 17 * new Double(bonus).hashCode();
	}

public String toString() {
return super.toString()
+ "[bonus=" + bonus + "]";
}
}// End of manger class
