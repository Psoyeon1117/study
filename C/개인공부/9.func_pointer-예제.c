#include <stdio.h>

void swap(char[], void*, void*);

int main(void) {
	int year1, year2;
	double height1, height2;
	printf("첫 번째 사람의 나이와 키 입력: ");
	scanf("%d %lf", &year1, &height1);
	printf("두 번째 사람의 나이와 키 입력: ");
	scanf("%d %lf", &year2, &height2);

	swap("int", &year1, &year2);
	swap("double", &height1, &height2);

	printf("첫 번째 사람의 나이와 키:%d %lf\n", year1, height1);
	printf("두 번째 사람의 나이와 키:%d %lf\n", year2, height2);
}
void swap(char c[], void* a, void* b) {	//a와 b의 자료형을 당장 알 수 없기 때문에 void포인터로 선언함
	if (c == "int") {	//호출될 때 c에 입력된 자료형에 맞추어 swap한다.
		int temp;
		temp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = temp;
	}
	else if (c == "double") {
		double temp;
		temp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = temp;
	}
}
