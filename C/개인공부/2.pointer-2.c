#include <stdio.h>

int main(void) {
	//주소와 포인터의 크기
	int db;
	int* pdb = &db;

	printf("double형 변수의 주소크기: %d\n", sizeof(&db));	// 8
	printf("double * 포인터의 크기: %d\n", sizeof(pdb));	// 8
	printf("double * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pdb));	// 4

	//포인터 대입
	int a = 10;
	int* p = &a;
	double* pd;
	pd = p;
	printf("pd의 값: %lf\n", *pd);	//이상한 값 발생
	//컴파일러는 *pd가 가리키는 변수의 자료형을 double로 알기 때문에 8bit만큼 읽어온다.
	//a 이후의 더미값까지 같이 읽혀서 이상한 값이 발생함+컴파일러가 경고함
	
	double b = 3.4;
	double* pb = &b;
	int* pi;
	pi = (int*)pb;
	printf("pi의 값: %d\n", *pi);	//85899...
	//형 변환을 통해서 경고없이 *pi값을 출력할 수 있지만,
	//데이터가 메모리에 저장되는 방식을 잘 알아야만 활용가능
	
}
