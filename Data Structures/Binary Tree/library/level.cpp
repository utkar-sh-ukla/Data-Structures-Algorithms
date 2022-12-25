#include "../header/binaryTree.h"

int btree::level(node* leaf, int key, int l) {
    if (leaf == NULL) return -1;

    if (leaf->value == key) return l;

    int left = level(leaf->left, key, l + 1);
    if (left != -1) return left;

    return level(leaf->right, key, l + 1);
}