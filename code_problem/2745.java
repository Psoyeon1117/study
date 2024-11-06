import java.util.*;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String bfc = sc.next();  //N
		int digit = sc.nextInt();  //B
		int res =0;
		char[] arr = bfc.toCharArray();  //문자열->배열
		int leng = bfc.length()-1;
		for(int c:arr) {  //c는 arr의 아스키코드
			int a = 0;
			if(c<65) {  //c가 정수일 경우
				a = c-48;  
			}else {  //c가 10이상일 경우 A~Z
				a = c - 55;
			}
			res += a * Math.pow(digit, leng);
			leng--;
		}
		System.out.println(res);
	}

}
