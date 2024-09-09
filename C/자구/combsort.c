#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//comb sort
	int n;
	scanf("%d", &n);
	int* ary = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ary[i]);
	}
	int gap = n, check = 0;
	while (check == 0) {
		gap = gap / 1.3;	//shrink 최적의 값이 1.3이다.
		if (gap <= 1) {
			gap = 1;
			check = 1;
		}
		else if(gap == 9 || gap == 10){
			gap = 11;
		}

		for (int i = 0; i + gap < n; i++) {	//gap에 따라 정렬하는 곳
			int j = i + gap;				//i와 gap만큼 떨어진 j를 비교하여 정렬한다.
			if (ary[i] < ary[j])	continue;
			int temp = ary[i];
			ary[i] = ary[j];
			ary[j] = temp;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", ary[i]);
	}
}
