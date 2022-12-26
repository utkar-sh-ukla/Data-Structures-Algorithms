#include "../headers/BinarySearchTree.h"

template <typename T>
void bst<T>::destroy_tree(Node<T>* leaf) {
	if (leaf != NULL) {
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

template <typename T>
void bst<T>::destroy_tree() {
	destroy_tree(root);
}