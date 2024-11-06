#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int miro[10][10];
    int o;
    for (int i = 0; i < 10; i++) {      //미로를 입력받는다.
        for (int j = 0; j < 10; j++) {
            scanf("%d", &o);
            miro[i][j] = o;
        }
    }
    int x = 1, y = 1;                   //처음 위치
    while (1) {
        if (miro[y][x] == 2) {          //현위치에 먹이가 있는 경우
            miro[y][x] = 9;
            break;
        }
        miro[y][x] = 9;                 //개미가 다녀간 표시
        if (miro[y][x + 1] != 1) {      //오른쪽이 막혀있지 않을 경우 이동한다.
            x++;
            continue;
        }                               //오른쪽이 막히면 아래를 확인한다.
        if (miro[y + 1][x] != 1) {      //아래가 막혀있지 않을 경우 이동한다.
            y++;
            continue;
        }
        break;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", miro[i][j]);
        }
        printf("\n");
    }
}
