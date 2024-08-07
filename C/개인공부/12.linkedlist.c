struct list {
  int num;
  struct list *next;  //자신의 구조체를 가리키는 자기 참조 구조체
};

int main(void) {
  //연결 리스트: 구조체 변수를 포인터로 연결한 것
  struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
  struct list *head = &a, *current;
  a.next = &b;  //a의 next는 b를 가리킴
  b.next = &c;  //b의 next는 c를 가리킴

  printf("head -> num: %d\n", head->num);
  printf("head -> next -> num: %d\n", head->next->num);
  printf("list all: ");
  current = head;  // = &a
  while (current != NULL) {
    printf("%d ", current->num);
    current = current->next;
  }
}
