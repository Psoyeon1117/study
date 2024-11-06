#include <stdio.h>

int main(void) {
	int ary[100][100];
	int n, m;
	scanf("%d %d", &n, &m);
	int i = 0, j = m - 1, c = 0, num = 1, plusI=0;
	ary[0][j] = 1;
	while (i != n - 1 || j != 0) {
		//한 줄 씩 채울 때, 시작 위치를 설정함
		if (c < m - 1) {			//빗금을 절반 채울 때까지		
			i = 0;
			j = m-1-c;				//열이 1씩 감소함
		}
		else {						//빗금을 절반 채운 후
			j = 0;
			i = plusI;				//행이 1씩 증가함
			plusI++;
		}
		while (1) {					//설정된 시작위치부터 빗금으로 채운다.
			ary[i][j] = num;
			num++;
			if (i >= n-1 || j >= m-1) break;	//한 줄을 다 채우면 반복문을 탈출함
			i++;	j++;
		}
		c++;						//반복 횟수 1 증가
	}

	for (int q = 0; q < n; q++) {	//출력
		for (int p = 0; p < m; p++) {
			printf("%d ", ary[q][p]);
		}
		printf("\n");
	}
}
