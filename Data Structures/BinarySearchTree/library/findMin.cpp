#include "../headers/BinarySearchTree.h"

// find Minium
template <typename T>
Node<T>* bst<T>::findMin(Node<T>* leaf) {
	while (leaf->left != NULL) leaf = leaf->left;
	return leaf;
}
