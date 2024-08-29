#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//1172_codeup
	//버블 정렬
	int ary[30];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {		//입력란
		scanf("%d", &ary[i]);
	}

	for (int i = 0; i < n-1; i++) {		//메인로직
		for (int j = 0; j < n-1; j++) {
			if (ary[j] > ary[j + 1]) {
				int temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {		//출력란
		printf("%d ", ary[i]);
	}
}
