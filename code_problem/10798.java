package baekjoon;

import java.util.Scanner;

public class main {

	public static void main(String[] args) throws Exception{
		//문자열을 2차원 배열로 입력을 받는다.
		Scanner sc = new Scanner(System.in);
		char[][] s = new char[5][];
		int maxLength = 0;
		for(int i=0; i<5; i++) {
			String a = sc.nextLine();
			s[i] = a.toCharArray();
			maxLength = maxLength < a.length()?a.length():maxLength;
		}
		//문자열의 최대길이를 구하고 최대길이에 따라 출력에 사용할 배열을 선언한다.
		//"s"와 "res"는 행의 번호=열의 번호인 전치행렬과 비슷하다.
		char[][] res = new char[maxLength][5];
		for(int col=0;col<5;col++) {
			int row=0;
			for(char e:s[col]) {
				res[row][col] = e;
				row++;
			}
		}
		//세로로 출력배열에 입력한다.
		for(int i=0;i<maxLength;i++) {
			for(int j=0; j<5;j++) {
				if(res[i][j] == '\0') {	//문자열의 길이가 달라서 생긴 빈 공간은 건너뛰고 출력한다.			
					continue;
					}
				System.out.print(res[i][j]);
			}
		}
	}

}
