#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int num;
	int mathScore;
	int infoScore;
}Student;

int compare(const void* a, const void* b);
int compareInfo(Student* a, Student* b);
int compareNum(Student* a, Student* b);

//구조체와 qsort연습문제
int main(void) {
	int n;
	scanf("%d", &n);
	Student ary[1001];
	for (int i = 0; i < n; i++) {	//입력
		scanf("%d %d", &ary[i].mathScore, &ary[i].infoScore);
		ary[i].num = i+1;
	}

	qsort(ary, n, sizeof(ary[0]), compare);
	//qsort(배열의 첫번째 포인터, 배열 수, 배열 하나의 크기, 비교함수);
	//qsort를 사용하기 위해선 compare함수를 구현해야 한다.

	for (int i = 0; i < n; i++) {	//출력
		printf("%d %d %d\n", ary[i].num, ary[i].mathScore, ary[i].infoScore);
	}
	return 0;
}
//수학과 정보 시험 점수는 높은 순으로 정렬하고 번호는 낮은 순으로 정렬함
//compare함수: 1=반환값일 경우 b가 앞으로 정렬됨. 0=반환값일 경우 a=b로 간주함
int compare(const void* a, const void* b) {	
	Student* pa = (Student*)a;
	Student* pb = (Student*)b;
	if (pa->mathScore < pb->mathScore) return 1;
	else if (pa->mathScore > pb->mathScore) return -1;
	else return compareInfo(pa, pb);
}
int compareInfo(Student* a, Student* b) {
	if (a->infoScore < b->infoScore) return 1;
	else if (a->infoScore > b->infoScore) return -1;
	else return compareNum(a, b);
}
int compareNum(Student* a, Student* b) {
	if (a->num > b->num) return 1;
	else if (a->num < b->num) return -1;
	else return 0;
}
