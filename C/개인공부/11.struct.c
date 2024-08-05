#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct profile {
  int age;
  double height;
  char name[20];
};
struct student {
  struct profile pf;
  int id;
  double grade;
  char *intro;  
};

int main(void) {
  struct student mina;
  
  mina.pf.age = 17;
  mina.pf.height = 165.4;
  strcpy(mina.pf.name, "mina");
  
  mina.id = 13;
  mina.grade = 80.4;
  
  mina.intro = (char *)malloc(80);
  printf("자기소개: ");
  gets(mina.intro);
  //intro는 포인터이기 때문에 문자열을 바로 입력받을 수 없음

  printf("%s: 나이%d 키%.1lf\n", mina.pf.name, mina.pf.age, mina.pf.height);
  printf("번호%d 성적%.1lf\n", mina.id, mina.grade);
  printf("%s", mina.intro);
  free(mina.intro);
}
