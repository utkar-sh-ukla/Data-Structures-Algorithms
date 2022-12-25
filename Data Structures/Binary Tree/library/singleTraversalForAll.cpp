#include "../header/binaryTree.h"

void btree::singleTraversalForAll(node* leaf, vector<int>& pre, vector<int>& in, vector<int>& post) {
	stack<pair<node*, int>> st;
	st.push({ leaf, 1 });
	if (leaf != NULL) {
		while (!st.empty()) {
			auto it = st.top();
			st.pop();

			// for PREORDER | 1 ~> 2
			if (it.second == 1) {
				pre.push_back(it.first->value);
				it.second++;
				st.push(it);

				// push the left side of tree
				if (it.first->left != NULL) {
					st.push({ it.first->left, 1 });
				}
			}

			// for INORDER | 2 ~> 3
			else if (it.second == 2) {
				in.push_back(it.first->value);
				it.second++;
				st.push(it);

				// push the right side of tree
				if (it.first->right != NULL) {
					st.push({ it.first->right, 1 });
				}
			}

			// for POSTORDER
			else {
				post.push_back(it.first->value);
			}
		}
	}
}

void btree::singleTraversalForAll() {
	vector<int> pre, in, post;

	singleTraversalForAll(root, pre, in, post);

	for (auto it : pre) {
		cout << it << ",";
	}
	cout << "\n";

	for (auto it : in) {
		cout << it << ",";
	}
	cout << "\n";

	for (auto it : post) {
		cout << it << ",";
	}
	cout << '\n';
}
