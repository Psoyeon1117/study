#include <stdio.h>
#include <string.h>

int main(void) {
	//가로,세로의 합 구하기
	int ary1[6] = { 1,2,3,4,5 };
	int ary2[6] = { 6,7,8,9,10 };
	int ary3[6] = { 11,12,13,14,15 };
	int ary4[6] = { 16,17,18,19,20 };
	int ary5[6] = { 0 };
	int* pary[5] = { ary1,ary2,ary3,ary4,ary5};

	for (int i = 0; i < 4; i++) {		//행의 합
		int sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += pary[i][j];
		}
		pary[i][5] = sum;
	}
	for (int i = 0; i < 5; i++) {		//열의 합&종합
	int sum = 0;
		for (int j = 0; j < 4; j++) {
			sum += pary[j][i];
		}
		pary[4][i] = sum;
		pary[4][5] += sum;				//종합값 구하기
	}
	for (int i = 0; i <= 4; i++) {		//출력
		for (int j = 0; j <= 5; j++) {
			printf("%d\t", pary[i][j]);
		}
			printf("\n");
	}
	

}
