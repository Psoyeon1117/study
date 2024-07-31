#include <stdio.h>

int sum(int, int);

int main(void) {
	int (*fp)(int, int);	//함수 포인터 선언
	int res, res1;

	fp = sum;				//함수명을 함수 포인터에 저장
	res = fp(10, 20);		//함수 포인터로 함수 호출
	res1 = (*sum)(10, 20);	//함수명에 간접 참조 연산자를 사용하여 함수를 호출함
	printf("result: %d\n", res);
	printf("result: %d\n", res1);

	int a = 10;
	double b = 3.5;
	void* vp;	//void포인터 선언

	vp = &a;
	printf("a : %d\n", *(int*)vp + 3);	//void포인터를 사용하기 위한 형 변환
	vp = &b;
	printf("b : %1f\n", *(double*)vp);	//void포인터를 사용하기 위한 형 변환

}
int sum(int a,  int b) {
	return (a + b);
}



