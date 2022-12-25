#include "../header/binaryTree.h"

void btree::inorder(node* leaf) {
	if (leaf != NULL) {
		inorder(leaf->left);
		cout << leaf->value << ",";
		inorder(leaf->right);
	}
}

void btree::inorder() {
	inorder(root);
	cout << "\n";
}
