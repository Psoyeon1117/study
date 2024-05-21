#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100
typedef struct {
	int key;
} element;

typedef struct node* treepointer;

typedef struct node {
	element data;
	treepointer leftchild;
	treepointer rightchild;
} node;

treepointer stack[STACK_SIZE];
int top = -1;
void MALLOC(treepointer* node, int size) {
	*node = malloc(size); // 포인터가 가리키는 곳에 메모리 할당 후 값을 저장
}
void push(treepointer* node) {
	if (top == STACK_SIZE - 1)return 0;
	stack[++top] = *node;
	return;
}
treepointer pop() {
	if (top == -1)return;
	return stack[top--];
}

treepointer parentSearch(treepointer tree, int k) {
	treepointer parentNode = NULL; // 마지막으로 검사된 노드를 가리키는 포인터
	while (tree) {
		if (k == tree->data.key)
			return parentNode;	//삭제할 노드의 부모노드 반환
		parentNode = tree;
		if (k < tree->data.key) tree = tree->leftchild;
		else tree = tree->rightchild;
	}
}

treepointer kthsearch(treepointer node, int x) {	//x번째 작은 노드
	int o = 0;
		//leftchild 끝으로 이동한 이후, o++를 하여 x와 같아지도록 한다.
	while (1) {
		for (; node; node=node->leftchild)
			push(&node);
		node = pop();
		if (!node)break;
		o++;
		if (x == o)return node;	//x번째로 작은 삭제노드 반환
		node = node->rightchild;
	}
	return NULL;	//x번째 노드가 없다면 null을 반환
}

treepointer modifiedSearch(treepointer node, int k) {
	treepointer last_examined_node = NULL; // 마지막으로 검사된 노드를 가리키는 포인터
	while (node) {
		if (k == node->data.key) // 노드가 키 k와 같은 경우
		{
			return NULL;
		} // NULL 반환
		last_examined_node = node; // 현재 노드를 마지막으로 검사된 노드로 설정
		if (k < node->data.key) {
			node = node->leftchild; // 왼쪽 자식 노드로 이동
		}
		else {
			node = node->rightchild; // 오른쪽 자식 노드로 이동
		}
	}
	return last_examined_node; // 노드를 찾은 경우 해당 노드 반환
}

void insert(treepointer* node, int k) {
	treepointer ptr;
	treepointer temp = modifiedSearch(*node, k);
	if (temp || !(*node)) {
		MALLOC(&ptr, sizeof(*ptr));
		ptr->data.key = k;
		ptr->leftchild = ptr->rightchild = NULL;
		if (*node) {
			if (k < temp->data.key) {
				temp->leftchild = ptr;
			}
			else {
				temp->rightchild = ptr;
			}
		}
		else {
			*node = ptr;
		}
	}
}

void inorder(treepointer root) {
	if (root) {
		inorder(root->leftchild);
		printf("%d ", root->data.key);
		inorder(root->rightchild);
	}
}
treepointer miniSearch(treepointer node) {
	treepointer parent = node;
	while (node->leftchild) {
		parent = node;
		node = node->leftchild;
	}
	parent->leftchild = NULL;
	return node;
}

int delete(treepointer* node, int k) {
	treepointer ptr;		//ptr=삭제할 노드, temp=삭제노드의 parent
	MALLOC(&ptr, sizeof(*ptr));
	ptr = kthsearch(*node, k);	//k번째 작은 노드, 삭제노드
	treepointer temp = parentSearch(*node, ptr->data.key);
	if (!ptr)return NULL;
	/*삭제 노드 with child 1
	삭제 노드와 부모 노드의 방향대로 삭제 노드의 부모 노드와 자식노드를 연결*/
	if (!(ptr->leftchild) || !(ptr->rightchild)) {
		treepointer child = (ptr->leftchild != NULL) ? ptr->leftchild : ptr->rightchild;	//삭제할 노드의 자식노드 정하기
		if (temp) {	//부모 노드가 있다면
			if (temp->leftchild == ptr)temp->leftchild = child;
			//ptr이 temp의 왼쪽에 있다면, temp의 leftchild와 ptr의 child가 연결됨
			else temp->rightchild = child;	//오른쪽이라면, temp의 rightchild와 ptr의 child가 연결됨
		}
		else { *node = child; }	//없다면, 삭제노드가 root이다.
		free(ptr);
		return k;
	}
  else {
		//삭제노드 with child 2, smallest right subtree node
		//삭제할 노드의 data을 smallest right subtree node의 data로 바꾼다. 
		//smallest right subtree node를 제거한다. 삭제할 노드의 data는 반환
		treepointer parent = ptr;
		treepointer miniNode = ptr->rightchild;	//smallest right subtree node
		while (miniNode->leftchild) {
			parent = miniNode;
			miniNode = miniNode->leftchild;	//가장 작은 노드를 찾기 때문에 leftchild로 이동함
		}
		//parent와 miniNode의 자식노드를 연결, 자식노드가 없다면 null이 입력됨
		if (parent->leftchild == miniNode) {
			parent->leftchild = miniNode->rightchild;
		}
		else { parent->rightchild = miniNode->rightchild; }
		ptr->data.key = miniNode->data.key;
		ptr = miniNode;
		free(ptr);
		return k;
	}

int main(void) {
	//x번째로 작은 노드를 삭제하는 함수를 작성
	//노드가 존재하면 해당 노드의 key를 반환
	//x가 트리 속 노드의 수보다 많으면 null를 반환
	treepointer tree = NULL;
	while (1) {
		int key;	scanf("%d", &key);
		if (key == 0)break;
		insert(&tree, key);
	}
	inorder(tree);
	int k = delete(&tree, 4);
	printf("\ndelete %d\n", k);
	inorder(tree);
}

