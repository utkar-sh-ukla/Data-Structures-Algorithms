#pragma once

#include <iostream>
using namespace std;

template <class T>
struct Node {
	T data;
	Node<T>* left;
	Node<T>* right;
};

template <typename T>
class bst {
public:
	bst();
	~bst();
	void insert(T);
	bool search(T);
	void deleteNode(T);
	bool isSymmetric();
	void destroy_tree();

private:
	Node<T>* getNewNode(T);
	Node<T>* insert(Node<T>*, T);
	bool search(Node<T>*, T);
	Node<T>* findMin(Node<T>*);
	Node<T>* deleteNode(Node<T>*, T);
	void destroy_tree(Node<T>*);
	bool isSymmetric(Node<T>*, Node<T>*);

protected:
	Node<T>* root;
};
