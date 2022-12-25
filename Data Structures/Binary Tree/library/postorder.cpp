#include "../header/binaryTree.h"

void btree::postorder(node* leaf) {
	if (leaf != NULL) {
		postorder(leaf->left);
		postorder(leaf->right);
		cout << leaf->value << ",";
	}
}

void btree::postorder() {
	postorder(root);
	cout << "\n";
}