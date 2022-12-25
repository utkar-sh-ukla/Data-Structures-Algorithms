#include "../header/binaryTree.h"

int di = 0;

int btree::diameter(node* leaf) {
    if (leaf == NULL) return 0;

    int h1 = diameter(leaf->left);
    int h2 = diameter(leaf->right);

    di = max(di, h1 + h2);

    return 1 + max(h1, h2);
}

void btree::diameter() {
    cout << di << endl;
}