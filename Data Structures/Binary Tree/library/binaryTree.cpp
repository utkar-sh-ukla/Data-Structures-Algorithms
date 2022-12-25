#include "../header/binaryTree.h"

btree::btree() {
	root = NULL;
}

btree::~btree() {
	destroy_tree();
}