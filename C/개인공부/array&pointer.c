#include <stdio.h>

int main(void) {
	int ary[3];
	int* pa = ary;	//pa == &ary[0]

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];	//pa를 배열명처럼 사용할 수 있다.

	for (int i = 0; i < 3; i++) {	//pa를 배열명처럼 사용하여 출력
		printf("%5d", pa[i]);
	}
	for (int i = 0; i < 3; i++) {	//pa를 포인터 연산식으로 사용하여 출력
		printf("%5d", *(pa + i));
	}
	for (int i = 0; i < 3; i++) {	//pa를 간단화(0과 괄호제거)하여 출력
		printf("%5d", *pa);
		pa++;
	}
}
