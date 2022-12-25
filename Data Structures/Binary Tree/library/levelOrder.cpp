#include "../header/binaryTree.h"

void btree::levelOrder(node* leaf, vector<vector<int>>& ans) {
	queue<node*>q;
	q.push(leaf);
	while (!q.empty()) {
		int size = q.size();
		vector<int>level;
		for (int i = 0; i < size; i++) {
			node* parent = q.front();
			q.pop();
			if (parent->left != NULL) {
				q.push(parent->left);
			}
			if (parent->right != NULL) {
				q.push(parent->right);
			}
			level.push_back(parent->value);
		}
		ans.push_back(level);
	}
}

void btree::levelOrder() {
	vector<vector<int>> ans;
	if (root != NULL) {
		levelOrder(root, ans);
		for (auto row : ans) {
			for (auto col : row) {
				cout << col << ",";
			}
			cout << '\n';
		}
	}
}