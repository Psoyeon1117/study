#include <stdio.h>

char* my_strcat(char* pa, char* pb);
int my_strlen(char* pa);

int main(void) {
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열: %s\n", str);
	my_strcat(str, "apple");
	printf("바꾼 후 문자열: %s\n", str);
	printf("문자열 길이: %d\n", my_strlen(str));

}

char* my_strcat(char* pa, char* pb) {
	char* save = pa;

	while (*pa != '\0') {
		pa++;
	}
	while (*pb != '\0') {
		*pa = *pb;
		pa++;
		pb++;
	}
	*pa = '\0';
	return save;
}
int my_strlen(char* pa) {
	int size=0;
	while (*pa != '\0') {
		pa++;
		size++;
	}
	return size;
}
