#include <stdio.h>
#include <string.h>

int main(void) {
	FILE* fp = fopen("a.txt", "a+");
	if (fp == NULL) {				//파일 생성에 실패했을 때, 프로그램 종료
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}
	char str[20];
	while (1) {
		printf("과일 이름: ");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) {		//end 입력 시, 프로그램 종료
			break;
		}
		else if (strcmp(str, "list") == 0) {//list 입력 시, 파일 내의 과일을 모두 출력한다.
			fseek(fp, 0, SEEK_SET);			//스트림 파일의 위치 지시자를 맨 위로 옮김
			while (1) {
				fgets(str, sizeof(str), fp);
				if (feof(fp)) { break; }
				printf("%s\n", str);
			}
		}
		else {
			fprintf(fp, "%s\n", str);		//과일을 파일에 입력한다.
		}
	}
	fclose(fp);
	return 0;
}
