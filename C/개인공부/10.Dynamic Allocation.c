#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	pd = (double*)malloc(sizeof(double));
	if (pi == NULL || pd == NULL) {
		printf("메모리가 부족합니다.");
		exit(1);
	}
	*pi = 3;
	*pd = 4.5;

	printf("정수형으로 사용: %d\n", *pi);
	printf("실수형으로 사용: %lf\n", *pd);

	free(pi);
	free(pd);
	/*----------------------------------------------------*/
	int* pary;
	pary = (int*)malloc(5 * sizeof(int));	//배열로 동적 할당

	if (pary == NULL) {
		printf("메모리가 부족합니다.");
		exit(1);
	}
	for (int i = 0; i < 5; i++) {
		scanf("%d", &pary[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", pary[i]);
	}
	free(pary);
}
