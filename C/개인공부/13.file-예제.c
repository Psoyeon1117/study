#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	FILE* fa = fopen("a.txt", "r");
	FILE* fb = fopen("b.txt", "r");
	FILE* fc = fopen("c.txt", "w");
	int i = 0, check = 0;
	char str[20];
	char* a_list[10], res, b_res;

	res = fgets(str, sizeof(str), fa);				//a.txt에 있는 단어들을 불러온다.
	while (res != NULL) {							//a.txt에 더 이상 불러올 단어가 없으면 종료
		a_list[i] = (char*)malloc(strlen(str)+1);	//메모리를 아끼기 위해서 동적 할당 사용함
		strcpy(a_list[i], str);
		res = fgets(str, sizeof(str), fa);
		i++;
	}

	b_res = fgets(str, sizeof(str), fb);			//b.txt의 단어가 a.txt에 있는 지 확인한다.
	while (b_res != NULL) {							//b.txt에 더 이상 불러올 단어가 없으면 종료
		check = 0;									//중복 체크를 위한 변수
		for (int j = 0; j < i; j++) {
			if (strcmp(a_list[j], str) == 0) {		//b.txt의 단어가 a_list에 있다면 중복을 체크한다.
				check = 1;
				break;
			}
		}
		if (check == 0) {							//b의 단어가 a에 없다면 해당 단어를 c.txt에 입력한다.
			fputs(str, fc);
		}
		b_res = fgets(str, sizeof(str), fb);
	}

	fclose(fa);
	fclose(fb);
	fclose(fc);
	return 0;

}
