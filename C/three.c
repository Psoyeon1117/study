int getHeight(treepointer node) {
	int maxHeight = 0;	//높이
	if (node) {
		int leftH = getHeight(node->leftchild);	//left subtree의 높이
		int rightH = getHeight(node->rightchild);	//right subtree의 높이
		maxHeight = (leftH > rightH) ? leftH : rightH;	//left와 right 중 높이가 더 높은 것을 고른다.
		maxHeight++;	//본인을 포함한 높이를 구하기 위해서 +1을 한다.
	}
	return maxHeight;
}
