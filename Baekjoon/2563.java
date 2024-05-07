import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		boolean[][] arr = new boolean[101][101]; //100*100크기의 종이
		int c = sc.nextInt();
		int res =0;
		for(int i=0;i<c;i++) {
			int x = sc.nextInt();
			int y = sc.nextInt();
			for(int j=x; j<x+10;j++) {	//10*10사각형들을 true로 만든다.
				for(int k=y; k<y+10; k++) {
					arr[j][k] = true;
				}	//true는 중복에 영향을 받지 않으니, 사각형이 겹칠 경우 고려하지 않아도 된다.
			}
		}
		for(int j=0; j<100;j++) {
			for(int k=0; k<100; k++) {
				if(!arr[j][k])continue;
				res++;					//true라면 1을 더한다
			}
		}
		System.out.println(res);
	}
}
