#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int key;
} element;

typedef struct node* treepointer;

typedef struct node {
	element data;
	treepointer leftchild;
	treepointer rightchild;
} node;

void MALLOC(treepointer* node, int size) {
	*node = malloc(size); // 포인터가 가리키는 곳에 메모리 할당 후 값을 저장
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

int delete(treepointer* node, int k) {
	//search함수로 트리에 k노드가 존재하는지 확인
	treepointer temp = NULL;
	treepointer ptr;		//ptr=삭제할 노드, temp=삭제노드의 parent
	MALLOC(&ptr, sizeof(*ptr));
	ptr = *node;
	while (ptr && ptr->data.key != k) {
		temp = ptr;
		ptr = (k < ptr->data.key) ? ptr->leftchild : ptr->rightchild;
	}
	if (ptr == NULL)return NULL;
	/*삭제 노드 with child 1
	삭제 노드와 부모 노드의 방향대로 삭제 노드의 부모 노드와 자식노드를 연결하면 됨*/
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

}
int main(void) {
	//key==x 노드를 삭제하는 함수를 작성
	//노드가 존재하면 해당 노드의 key를 반환
	//존재하지 않으면 null를 반환
	treepointer tree = NULL;
	while (1) {
		int key;	scanf("%d", &key);
		if (key == 0)break;
		insert(&tree, key);
	}
	inorder(tree);
	int k = delete(&tree, 18);
	printf("\ndelete %d\n", k);
	inorder(tree);
}
