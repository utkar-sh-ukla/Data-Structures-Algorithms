#include "../header/binaryTree.h"

void btree::preorder(node* leaf) {
	if (leaf != NULL) {
		cout << leaf->value << ",";
		preorder(leaf->left);
		preorder(leaf->right);
	}
}

void btree::preorder() {
	preorder(root);
	cout << "\n";
}