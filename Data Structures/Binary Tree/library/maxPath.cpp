#include "../header/binaryTree.h"

int len = INT_MIN;

int btree::maxPath(node* leaf) {
    if (leaf == NULL) return 0;

    int ls = max(0, maxPath(leaf->left));
    int rs = max(0, maxPath(leaf->right));

    len = max(len, ls + rs + leaf->value);

    return  leaf->value + max(ls, rs);
}

void btree::maxPath() {
    cout << maxPath(root) << endl;
}