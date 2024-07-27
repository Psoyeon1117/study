int main(void) {
	
	char animal[5][20];	//문자열 저장을 위한 2차원 배열
	int count = sizeof(animal) / sizeof(animal[0]);	//행의 수 계산
	for (int i = 0; i < count; i++) {
		scanf("%s", animal[i]);	//2차원 배열의 부분배열
	}
	for (int j = 0; j < count; j++) {
		printf("%s\n", animal[j]);
	}
	
	int num[3][4] = { {1},{2,3},{4,5,6} };	//남는 공간은 0으로 자동초기화된다.
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", num[i][j]);
		}
			printf("\n");
	}

	int score[2][3][4] = {	//3차원 배열, score[면][행][열]
		{{1,2,3,4},{1,2,3,4},{1,2,3,4}},
		{{1,2,3,4},{1,2,3,4},{1,2,3,4}}
	};
			printf("\n\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				printf("%d ", score[i][j][k]);
			}
			printf("\n");
		}
			printf("\n");
	}
}
