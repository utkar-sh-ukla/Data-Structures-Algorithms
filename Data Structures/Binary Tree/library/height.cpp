#include "../header/binaryTree.h"

int btree::height(node* leaf) {
    if (leaf == NULL) return 0;

    int ls = height(leaf->left);
    int rs = height(leaf->right);

    return (1 + max(ls, rs));
}

void btree::height() {
    cout << height(root) << endl;
}