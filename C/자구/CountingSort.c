#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//code_up_3014
//countingsort

int main(void) {
	int n, max = 0;
	scanf("%d", &n);
	int* ary = (int*)malloc(sizeof(int) * (n + 1));
	int* cary = (int*)malloc(sizeof(int) * (n + 1));
	int counting[100000] = { 0 };

	for (int i = 1; i <= n; i++) {
		scanf("%d", &ary[i]);
		counting[ary[i]]++;	//숫자 등장 횟수 세기
		if (ary[i] > max) max = ary[i];	//누적합 계산 횟수를 정하기 위한 과정
	}

	for (int i = 1; i <= max; i++) {	//누적합 계산
		counting[i] = counting[i] + counting[i - 1];
	}
	for (int i = 1; i <= n; i++) {
		int set = counting[ary[i]];	//ary의 숫자가 cary에 들어갈 위치
		cary[set] = ary[i];
		counting[ary[i]]--;
	}
	
	for (int i = 1; i <= n; i++) {	//출력
		printf("%d ", cary[i]);
	}
}
