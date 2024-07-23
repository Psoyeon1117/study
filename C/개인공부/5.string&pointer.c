#include <stdio.h>

int main(void) {
	//문자열은 char배열형태로 따로 보관되고 문자열 상수는 배열의 첫 번째 요소의 메모리 주소값이 된다.
	printf("apple이 저장된 시작주소의 값: %p\n", "apple");	//a의 메모리 주소 값
	printf("두 번째 문자의 주소 값: %p\n", "apple"+1);	//p의 메모리 주소 값
	printf("첫 번째 문자: %c\n", *"apple");
	printf("두 번째 문자: %c\n", *("apple"+1));
	printf("배열로 표현한 세 번째 문자: %c\n", "apple"[2]);

	//char포인터에 문자열을 대입하여 사용할 수 있다.
	char* dessert = "apple";	//dessert는 a를 가리키고 있다.
	printf("\n오늘의 디저트는 %s입니다\n", dessert);
	dessert = "banana";
	printf("오늘의 디저트는 %s입니다\n", dessert);

	//scanf함수를 사용한 문자열 입력
	//%s를 사용하면 공백 없는 연속된 문자들을 입력받음
	char str[30];
	printf("\n문자열 입력: ");	//apple jam
	scanf("%s", str);
	printf("첫 번째 단어: %s\n", str);	//apple
	scanf("%s", str);
	printf("두 번째 단어: %s\n", str);	//jam

	//gets와 fgets
	//gets은 문자열의 공백과 탭 문자도 모두 가져온다. 버퍼의 개행문자(\n)를 널문자(\0)로 바꾸어 배열에 저장한다. 
	//fgets는 gets에 문자열 크기와 입력방식이 추가된 함수이다. 버퍼의 개행문자 뒤에 널문자를 붙여 배열에 저장한다.
	getchar();
	char gstr[30];
	char fgstr[30];
	printf("gstr문자열 입력: ");
	gets(gstr);
	printf("fgstr문자열 입력: ");
	fgets(fgstr,sizeof(fgstr),stdin);
	printf("입력된 gstr은 %s입니다 \n", gstr);
	printf("입력된 fgstr은 %s입니다 \n", fgstr);

}
