#include "../headers/BinarySearchTree.h"

// Search a Node
template <typename T>
bool bst<T>::search(Node<T>* leaf, T v) {
	if (leaf == NULL) {
		return false;
	}
	else if (leaf->data == v) {
		return true;
	}
	else if (v <= leaf->data) {
		return search(leaf->left, v);
	}
	else {
		return search(leaf->right, v);
	}
}

template <typename T>
bool bst<T>::search(T v) {
	return search(root, v);
}