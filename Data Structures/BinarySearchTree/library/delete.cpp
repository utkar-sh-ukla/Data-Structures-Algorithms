#include "../headers/BinarySearchTree.h"

// Delete a Node
template <typename T>
Node<T>* bst<T>::deleteNode(Node<T>* leaf, T v) {
	if (leaf == NULL) return leaf;
	else if (v < leaf->data) leaf->left = deleteNode(leaf->left, v);
	else if (v > leaf->data) leaf->right = deleteNode(leaf->right, v);
	else {
		if (leaf->left == NULL && leaf->right == NULL) {
			delete leaf;
			leaf = NULL;
		}
		else if (leaf->left == NULL) {
			Node<T>* temp = leaf;
			leaf = leaf->right;
			delete temp;
		}
		else if (leaf->right == NULL) {
			Node<T>* temp = leaf;
			leaf = leaf->left;
			delete temp;
		}
		else {
			Node<T>* temp = findMin(leaf->right);
			leaf->data = temp->data;
			leaf->right = deleteNode(leaf->right, temp->data);
		}
	}
	return leaf;
}

template <typename T>
void bst<T>::deleteNode(T v) {
	deleteNode(root, v);
}
