#include <stdio.h>

void quicksort(int* e, int left, int right);
//quick sort 정렬
int main(void) {
	int ary[100000];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ary[i]);
	}
	quicksort(ary, 0, n - 1);
	for (int i = 0; i < n; i++) {
		printf("%d\n", ary[i]);
	}
}
void quicksort(int *e, int left, int right) {
	int pivot, i, j, temp;
	if (left < right) {
		pivot = e[left];			//pivot는 맨 왼쪽
		i = left;	j = right + 1;
		do {
			//i = pivot보다 큰 수 위치, j = pivot보다 작은 수 위치
			do i++; while (e[i] < pivot);	//왼쪽에서부터 pivot보다 큰 수를 찾음
			do j--; while (e[j] > pivot);	//오른쪽에서부터 pivot보다 작은 수를 찾음
			if (i < j) {			//조건 충족 시, 위치를 바꿈
				temp = e[i];
				e[i] = e[j];
				e[j] = temp;
			}
		} while (i < j);
		temp = e[left];				//pivot와 j의 위치를 바꾼다.
		e[left] = e[j];
		e[j] = temp;
		//pivot는 정렬된 수가 된다. 
		//=> pivot왼쪽은 모두 작은 수이고 오른쪽은 모두 큰 수이기 때문
		//pivot 왼쪽, 오른쪽의 정렬되지 않은 배열을 마저 정렬한다.
		quicksort(e, left, j - 1);
		quicksort(e, j + 1, right);
	}
}
