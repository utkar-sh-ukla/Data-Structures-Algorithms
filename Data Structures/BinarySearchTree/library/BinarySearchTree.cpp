#include "../headers/BinarySearchTree.h"
#include "insert.cpp"
#include "search.cpp"
#include "delete.cpp"
#include "findMin.cpp"
#include "getNewNode.cpp"
#include "destroy.cpp"
#include "isSymmetric.cpp"

// Default Constructor
template <typename T>
bst<T>::bst() {
	root = NULL;
}

// Default Destructor
template <typename T>
bst<T>::~bst() {
	destroy_tree();
}



//// Print the Tree - Pre Order Traversal
//template <typename T>
//void bst<T>::print(Node<T>* root) {
//	if (root == NULL) return;
//	cout << root->data << " ";
//	print(root->left);
//	print(root->right);
//}
