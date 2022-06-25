#include <iostream>

template <class T>
class BinarySearchTree
{

	struct node{
		T value;
		struct node* right;
		struct node* left;
	};

public:
	BinarySearchTree();
	~BinarySearchTree();
	void add(T val);
	void printPreOrder();
	void printInOrder();
	void printPostOrder();
	int size();
	bool lookup(T val);

private:
	struct node* root;
	int treeSize;
	void add(struct node** node, T val);
	bool lookup(struct node* node, T val);
	void printPreOrder(struct node* node);
	void printInOrder(struct node* node);
	void printPostOrder(struct node* node);
	void deleteTree(struct node* node);
};

template <class T>
BinarySearchTree<T>::BinarySearchTree(){
	this->root = NULL;
	this->treeSize = 0;
}

template <class T>
BinarySearchTree<T>::~BinarySearchTree(){
	deleteTree(this->root);
}

template <class T>
int BinarySearchTree<T>::size(){
	return this->treeSize;
}

template <class T>
void BinarySearchTree<T>::add(T val){
	add(&(this->root), val);
}

template <class T>
void BinarySearchTree<T>::add(struct node** node, T val){

	if(*node == NULL)	{
		struct node* tmp = new struct node;
		tmp->value = val;
		tmp->left=NULL;
		tmp->right = NULL;
		*node = tmp;

		this->treeSize++;
	}else{
		if(val > (*node)->value){
			add(&(*node)->right, val);
		}else{
			add(&(*node)->left, val);
		}
	}
}

template <class T>
void BinarySearchTree<T>::printInOrder(){
	printInOrder(this->root);
	std::cout << std::endl;
}

template <class T>
void BinarySearchTree<T>::printInOrder(struct node* node){
	if(node != NULL){
		printInOrder(node->left);
		std::cout << node->value << ", ";
		printInOrder(node->right);
	}
}

template <class T>
void BinarySearchTree<T>::printPreOrder(){
	printPreOrder(this->root);
	std::cout << std::endl;
}

template <class T>
void BinarySearchTree<T>::printPreOrder(struct node* node){
	if(node != NULL)	{
		std::cout << node->value << ", ";
		printInOrder(node->left);
		printInOrder(node->right);
	}
}

template <class T>
void BinarySearchTree<T>::printPostOrder(){
	printPostOrder(this->root);
	std::cout << std::endl;
}

template <class T>
void BinarySearchTree<T>::printPostOrder(struct node* node){
	if(node != NULL){
		printInOrder(node->left);
		printInOrder(node->right);
		std::cout << node->value << ", ";
	}
}


template <class T>
void BinarySearchTree<T>::deleteTree(struct node* node){
	if(node != NULL){
		deleteTree(node->left);
		deleteTree(node->right);
		delete node;
	}
}

template <class T>
bool BinarySearchTree<T>::lookup(T val){
	return lookup(this->root, val);
}

template <class T>
bool BinarySearchTree<T>::lookup(struct node* node, T val){
	if(node == NULL){
		return false;
	}else{
		if(val == node->value){
			return true;
		}

		if(val > node->value){
			return lookup(node->right, val);
		}else{
			return lookup(node->left, val);
		}
	}

}

int main(){

	BinarySearchTree<int> tree;

	tree.add(5);
	tree.add(4);
	tree.add(7);
	tree.add(10);
	tree.add(1);
	tree.add(2);

	tree.printPostOrder();
	tree.printInOrder();
	tree.printPreOrder();

	std::cout << "Tree size: " << tree.size() << std::endl;

	BinarySearchTree<char> tee;

	tee.add('z');
	tee.add('0');
	tee.add('9');
	tee.add('a');
	tee.add('A');
	tee.add('Z');

	std::cout << "Contains 9? : "<< ((tee.lookup('9'))? "true" : "false" ) << std::endl;

	tee.printPostOrder();
	tee.printInOrder();
	tee.printPreOrder();

	std::cout << "Tree size: " << tee.size() << std::endl;
}