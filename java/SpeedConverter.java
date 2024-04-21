package test;

public class SpeedConverter {

	private static double a = 45.11;
	public static void main(String[] args) {
		double m = SpeedConverter.conversion();
		if(m<0) {return;}
		System.out.printf("%f km/h = %f mi/h",a,m);
	}
	public static double conversion() {
		if(a<0) {
			System.out.println("Invaild Value");
			return -1;
		}
		return a/1.609;
	}

}
