#include "../headers/BinarySearchTree.h"

// Init a new Node
template <typename T>
Node<T>* bst<T>::getNewNode(T v) {
	Node<T>* temp = new Node<T>();
	temp->data = v;
	temp->left = temp->right = NULL;
	return temp;
}