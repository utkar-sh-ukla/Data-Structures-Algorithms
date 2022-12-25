#include "../header/binaryTree.h"

int btree::sum(node* leaf) {
	if (leaf == NULL) return 0;

	return leaf->value + sum(leaf->left) + sum(leaf->right);
}

void btree::sum() {
	cout << sum(root) << endl;
}