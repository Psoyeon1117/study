#include <stdio.h>
#include <string.h>

int c;
void assign1(void);
void assign2(void);
void auto_func(void);
void static_func(void);
int main(void) {
	//지역변수
	int a = 10, b = 20;
	printf("교환 전 a와 b의 값: %d %d\n", a, b);	//10 20
	{
		int a = 1, b= 2, temp;
		temp = a;
		a = b;
		b = temp;
		//가장 가까운 블록(=내부블록)의 a,b를 사용함
		//내부블록과 외부블록의 a,b는 메모리에 독립된 저장공간을 갖기 때문에
	}
	printf("교환 후 a와 b의 값: %d %d\n\n", a, b);	//10 20 -> 외부블록의 a,b가 바뀌지 않음

	//전역변수
	printf("호출 전 c의 값: %d \n", c);	//0
	assign1(c);
	assign2(c);
	printf("호출 후 c의 값: %d \n\n", c);	//10

	//정적 지역 변수
	printf("일반 지역 변수를 사용한 함수...\n");
	for (int i = 0; i < 3; i++) {
		auto_func();	// 1 1 1
	}
	printf("정적 지역 변수를 사용한 함수...\n");
	for (int i = 0; i < 3; i++) {
		static_func();	// 1 2 3
	}
}
void assign1(void) {
	c = 10;
}
void assign2(void) {
	int c;	//전역변수와 지역변수 이름이 같으면, 지역변수가 먼저 사용된다.
	c = 20;
}
void auto_func(void) {
	auto int d = 0;
	d++;
	printf("%d\n", d);
}
void static_func(void) {
	static int d = 0;
	d++;
	printf("%d\n", d);
}
