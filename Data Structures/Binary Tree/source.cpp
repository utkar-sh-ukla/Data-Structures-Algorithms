#include "header/binaryTree.h"

int main() {

	btree* tree = new btree();

	tree->insert(10);
	tree->insert(6);
	tree->insert(14);
	tree->insert(5);
	tree->insert(8);
	tree->insert(11);
	tree->insert(18);

	tree->preorder();
	tree->inorder();
	tree->postorder();
	tree->topView();
	tree->bottomView();
	tree->singleTraversalForAll();
	tree->levelOrder();
	tree->height();
	tree->count();
	tree->sum();
	tree->maxPath();
	tree->diameter();
	cout << tree->lca(8, 18)->value << endl;
	delete tree;

}

// Outputs:

// 10,6,5,8,14,11,18,
// 5,6,8,10,11,14,18,
// 5,8,6,11,18,14,10,
// 5,6,10,14,18,
// 5,6,11,14,18,
// 10,6,5,8,14,11,18,
// 5,6,8,10,11,14,18,
// 5,8,6,11,18,14,10,
// 10,
// 6,14,
// 5,8,11,18,