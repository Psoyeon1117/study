#include <stdio.h>

int main() {
    //코드업 1442번
    //선택정렬
    //작은 수를 찾아 왼쪽으로 옮기는 정렬을 반복하여 배열을 오름차순으로 정렬하는 방법
    int a[10001];
    int n, i, j, temp, min;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++) {          //왼쪽으로 옮기기 정렬 반복 횟수
        min = i;
        for (int j = i + 1; j <= n; j++) {  //정렬되지 않은 배열 중 가장 작은 수를 찾음
            if (a[min] > a[j]) {
                min = j;
            }
        }
        temp = a[i];                        //작은 수를 왼쪽으로 옮김
        a[i] = a[min];
        a[min] = temp;
    }
    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}
