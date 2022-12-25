#include "../header/binaryTree.h"

int btree::distance(node* leaf, int a, int b) {
    node* lca_node = lca(a, b);

    int l1 = level(lca_node, a, 0);
    int l2 = level(lca_node, b, 0);

    return l1 + l2;
}

void btree::distance(int a, int b) {
    cout << distance(root, a, b) << endl;
}