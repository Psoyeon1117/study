package test;

public class SpeedConverterTwo {
	private double a = 45.11;
	public static void main(String[] args) {
		SpeedConverterTwo sct = new SpeedConverterTwo();
		double m = sct.conversion();
		if(m<0) {return;}
		System.out.printf("%f km/h = %f mi/h", sct.a, m);
	}
	public double conversion() {
		if(a<0) {
			System.out.println("Invaild Value");
			return -1;
		}
		return a/1.609;
	}
}
