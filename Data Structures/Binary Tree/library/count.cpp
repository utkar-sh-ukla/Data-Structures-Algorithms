#include "../header/binaryTree.h"

int btree::count(node* leaf) {
	if (leaf == NULL) return 0;

	return 1 + count(leaf->left) + count(leaf->right);
}

void btree::count() {
	cout << count(root) << endl;
}