#include "../header/binaryTree.h"

void btree::bottomView(node* leaf) {
	if (leaf != NULL) {
		map<int, int> mpp;
		queue<pair<node*, int>> q;
		q.push({ leaf, 0 });
		while (!q.empty()) {
			auto it = q.front();
			q.pop();
			node* _node = it.first;
			int line = it.second;
			mpp[line] = _node->value;

			if (_node->left != NULL) {
				q.push({ _node->left, line - 1 });
			}
			if (_node->right != NULL) {
				q.push({ _node->right, line + 1 });
			}
		}

		for (auto it : mpp) {
			cout << it.second << ",";
		}
	}

}

void btree::bottomView() {
	bottomView(root);
	cout << "\n";
}
