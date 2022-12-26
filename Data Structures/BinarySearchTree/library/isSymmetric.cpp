#include "../headers/BinarySearchTree.h"

//Check if tree is symmetric overloaded function
template <typename T>
bool bst<T>::isSymmetric(Node<T>* rootLeft, Node<T>* rootRight) {
	if (rootLeft == NULL && rootRight == NULL)
		return true;
	if ((rootLeft == NULL && rootRight != NULL) || (rootLeft != NULL && rootRight == NULL))
		return false;
	if (rootLeft->data != rootRight->data)
		return false;
	return isSymmetric(rootLeft->left, rootRight->right) && isSymmetric(rootLeft->right, rootRight->left);
}


//Check if tree is symmetric
template <typename T>
bool bst<T>::isSymmetric() {
	if (root == NULL)
		return true;
	return isSymmetric(root->left, root->right);
}