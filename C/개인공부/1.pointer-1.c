#include <stdio.h>

int main(void) {
	int a = 10, b = 15, total;
	double avg;
	char ch = 'c';
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;
	char* pch = &ch;
	//* 앞에 자료형은 포인터가 가리키는 변수의 자료형을 컴파일러에게 나타냄

	pa = &a;
	pb = &b;
	//pa, pb, pt, pg는 각 변수의 주소가 들어가있다.
	//a의 주소가 100~103일 경우, pa = 100이다.

	*pt = *pa + *pb;
	*pg = *pt / 2.0;
	//*=간접 참조 연산자, 포인터가 가리키는 변수를 사용할 때
	//*pt == total

	printf("두 정수의 값:%d %d\n", *pa, *pb);	//a와 b의 값 = 10, 15
	printf("두 정수의 합:%d\n", *pt);	//total값 = 25
	printf("두 정수의 평균:%.1f\n", *pg);	//avg값 = 12.5
	printf("ch의 값: %c\n", *pch);	// c

	int c = 10;
	const int* pc = &c;

	printf("c의 값: %d\n", *pc);	// 10
	pc = &b;
	printf("b의 값: %d\n", *pc);	// 15
	pc = &c;
	c = 5;
	printf("c의 값: %d\n", *pc);	//5
	//*pc = 3; //오류발생, pc가 가리키는 변수 c는 pc를 간접참조하여 바꿀 수 없음
}
