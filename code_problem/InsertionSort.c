#include <stdio.h>

int main() {
    //코드업 1443번
    //삽입 정렬
    //정렬된 배열의 뒤쪽에서 부터 원소를 하나씩 삽입하여 순서에 맞는 위치로 찾아가며 정렬하는 방식
    int a[10001];
    int n, i, j, temp, key;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
        scanf("%d", &a[i]);

    for (i = 2; i <= n; i++) 
    {
        key = a[i];             //정렬할 요소는 key에 입력
        for (j = i-1; j > 0 && a[j]>key ; j--) //a[j]가 key보다 크면 한 칸씩 뒤로 옮긴다.
            {
                a[j + 1] = a[j];
            }
            a[j + 1] = key; //a[j]가 key보다 작으면 a[j]뒤에 정렬할 요소를 넣는다.
        }
    
    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}
