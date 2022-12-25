#include "../header/binaryTree.h"

node* btree::lca(node* leaf, int a, int b) {
    if (leaf == NULL) return NULL;

    if (leaf->value == a || leaf->value == b) return leaf;

    node* leftans = lca(leaf->left, a, b);
    node* rightans = lca(leaf->right, a, b);

    if (leftans != NULL && rightans != NULL) return leaf;

    return leftans != NULL ? leftans : rightans;
}

node* btree::lca(int a, int b) {
    return lca(root, a, b);
}