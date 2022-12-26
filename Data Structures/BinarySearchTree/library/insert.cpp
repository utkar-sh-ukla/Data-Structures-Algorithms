#include "../headers/BinarySearchTree.h"

// Insert a Node
template <typename T>
Node<T>* bst<T>::insert(Node<T>* leaf, T v) {
	if (leaf == NULL) {
		leaf = getNewNode(v);
	}
	else if (v <= leaf->data) {
		leaf->left = insert(leaf->left, v);
	}
	else {
		leaf->right = insert(leaf->right, v);
	}
	return leaf;
}

template <typename T>
void bst<T>::insert(T v) {
	root = (root) ? insert(root, v) : getNewNode(v);
}