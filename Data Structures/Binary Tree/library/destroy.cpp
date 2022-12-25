#include "../header/binaryTree.h"

void btree::destroy_tree(node* leaf) {
	if (leaf != NULL) {
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void btree::destroy_tree() {
	destroy_tree(root);
}