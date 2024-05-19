#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int key;
} element;

typedef struct node *treepointer;

typedef struct node {
  element data;
  treepointer leftchild;
  treepointer rightchild;
} node;

void MALLOC(treepointer *node, int size);
treepointer modifiedSearch(treepointer node, int k);
element *search(treepointer tree, int k);
void insert(treepointer *node, int k);
void inorder(treepointer root);

void MALLOC(treepointer *node, int size) { 
  *node = malloc(size); // 포인터가 가리키는 곳에 메모리 할당 후 값을 저장
}

treepointer modifiedSearch(treepointer node, int k) {
  treepointer last_examined_node = NULL; // 마지막으로 검사된 노드를 가리키는 포인터
    while (node) {
      if (k == node->data.key) // 노드가 키 k와 같은 경우
      {return NULL;} // NULL 반환
      last_examined_node = node; // 현재 노드를 마지막으로 검사된 노드로 설정
      if (k < node->data.key) {
        node = node->leftchild; // 왼쪽 자식 노드로 이동
      } else {
        node = node->rightchild; // 오른쪽 자식 노드로 이동
      }
    }
    return last_examined_node; // 노드를 찾은 경우 해당 노드 반환
  }


element *search(treepointer tree, int k) {
  while (tree) {
    if (k == tree->data.key)
      return &(tree->data);
    if (k < tree->data.key) {
      tree = tree->leftchild;
    } else {
      tree = tree->rightchild;
    }
  }
  return NULL;
}

void insert(treepointer *node, int k) {
  treepointer ptr;
  treepointer temp = modifiedSearch(*node, k);
  if (temp || !(*node)) {
    MALLOC(&ptr, sizeof(node));
    ptr->data.key = k;
    ptr->leftchild = ptr->rightchild = NULL;
    if (*node) {
      if (k < temp->data.key) {
        temp->leftchild = ptr;
      } else {
        temp->rightchild = ptr;
      }
    } else {
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

int main() {
  treepointer tree = NULL;
  treepointer root;
  MALLOC(&root, sizeof(tree));
  root->leftchild=root->rightchild = NULL;
  insert(&tree, 30);
  insert(&tree, 50);
  insert(&tree, 20);
  inorder(tree);
  return 0;
}
