#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

struct node{
	int value;
	node *left;
	node *right;
};

class btree{
public:
	btree();
	~btree();

	void insert(int key);
	node *search(int key);
	void destroy_tree();
	void inorder_print();
	void postorder_print();
	void preorder_print();
	void topView();
	void bottomView();
	void singleTraversalForAll();
	void levelOrder();
private:
	void destroy_tree(node *leaf);
	void insert(int key, node *leaf);
	node *search(int key, node *leaf);
	void inorder_print(node *leaf);
	void postorder_print(node *leaf);
	void preorder_print(node *leaf);
	void topView(node *leaf);
	void bottomView(node *leaf);
	void singleTraversalForAll(node *leaf, std::vector<int> &pre, std::vector<int> &in, std::vector<int> &post);
	void levelOrder(node *leaf, vector<vector<int>> &ans);
	node *root;
};


btree::btree(){
	root = NULL;
}

btree::~btree(){
	destroy_tree();
}

void btree::destroy_tree(node *leaf){
	if(leaf != NULL){
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void btree::insert(int key, node *leaf){

	if(key < leaf->value){
		if(leaf->left != NULL){
			insert(key, leaf->left);
		}else{
			leaf->left = new node;
			leaf->left->value = key;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
	}else if(key >= leaf->value){
		if(leaf->right != NULL){
			insert(key, leaf->right);
		}else{
			leaf->right = new node;
			leaf->right->value = key;
			leaf->right->right = NULL;
			leaf->right->left = NULL;
		}
	}

}

void btree::insert(int key){
	if(root != NULL){
		insert(key, root);
	}else{
		root = new node;
		root->value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

node *btree::search(int key, node *leaf){
	if(leaf != NULL){
		if(key == leaf->value){
			return leaf;
		}
		if(key < leaf->value){
			return search(key, leaf->left);
		}else{
			return search(key, leaf->right);
		}
	}else{
		return NULL;
	}
}

node *btree::search(int key){
	return search(key, root);
}

void btree::destroy_tree(){
	destroy_tree(root);
}

void btree::inorder_print(){
	inorder_print(root);
	cout << "\n";
}

void btree::inorder_print(node *leaf){
	if(leaf != NULL){
		inorder_print(leaf->left);
		cout << leaf->value << ",";
		inorder_print(leaf->right);
	}
}

// Moris inorder traversal

// void btree::inorder_print(node *leaf) {
//     node *cur = leaf;
//     while(cur != NULL) {
//         if(cur->left == NULL) {
//             cout << cur->value <<  ",";
//             cur = cur->right;
//         }
//         else {
//             node *prev = cur->left;
//             while(prev->right && prev->right != cur) {
//                 prev = prev->right;
//             }
//             if(prev->right == NULL) {
//                 prev->right = cur;
//                 cur = cur->left;
//             }
//             else {
//                 prev->right = NULL;
//                 cout << cur->value << ",";
//                 cur = cur->right;
//             }
//         }
//     }
// }

void btree::postorder_print(){
	postorder_print(root);
	cout << "\n";
}

void btree::postorder_print(node *leaf){
	if(leaf != NULL){
		postorder_print(leaf->left);
		postorder_print(leaf->right);
		cout << leaf->value << ",";
	}
}

void btree::preorder_print(){
	preorder_print(root);
	cout << "\n";
}

void btree::preorder_print(node *leaf){
	if(leaf != NULL){
		cout << leaf->value << ",";
		preorder_print(leaf->left);
		preorder_print(leaf->right);
	}
}

// Moris preorder traversal

// void btree::preorder_print(node *leaf) {
//     node *cur = leaf;
//     while(cur != NULL) {
//         if(cur->left == NULL) {
//             cout << cur->value <<  ",";
//             cur = cur->right;
//         }
//         else {
//             node *prev = cur->left;
//             while(prev->right && prev->right != cur) {
//                 prev = prev->right;
//             }
//             if(prev->right == NULL) {
//                 prev->right = cur;
//                 cout << cur->value << ",";
//                 cur = cur->left;
//             }
//             else {
//                 prev->right = NULL;
//                 cur = cur->right;
//             }
//         }
//     }
// }

void btree::bottomView(){
	bottomView(root);
	cout << "\n";
}

void btree::bottomView(node *leaf) {
	vector<int> ans;
	if(leaf != NULL) {
		map<int,int> mpp;
		queue<pair<node*, int>> q;
		q.push({leaf, 0});
		while(!q.empty()) {
			auto it = q.front();
			q.pop();
			node* _node = it.first;
			int line = it.second;
			mpp[line] = _node->value;

			if(_node->left != NULL) {
				q.push({_node->left, line-1});
			}
			if(_node->right != NULL) {
				q.push({_node->right, line + 1});
			}
		}

		for(auto it : mpp) {
			cout << it.second << ",";
		}
	}

}

void btree::topView(){
	topView(root);
	cout << "\n";
}

void btree::topView(node *leaf) {
	vector<int> ans;
	if(leaf != NULL) {
		map<int,int> mpp;
		queue<pair<node*, int>> q;
		q.push({leaf, 0});
		while(!q.empty()) {
			auto it = q.front();
			q.pop();
			node* _node = it.first;
			int line = it.second;
			if(mpp.find(line) == mpp.end()) mpp[line] = _node->value;

			if(_node->left != NULL) {
				q.push({_node->left, line-1});
			}
			if(_node->right != NULL) {
				q.push({_node->right, line + 1});
			}
		}

		for(auto it : mpp) {
			cout << it.second << ",";
		}
	}
}

//	PreOrder | Inorder | Postorder in one Traversals

void btree::singleTraversalForAll() {
	vector<int> pre, in, post;

	singleTraversalForAll(root, pre, in, post);

	for(auto it : pre) {
		cout << it << ",";
	}
	cout << "\n";

	for(auto it : in) {
		cout << it << ",";
	}
	cout << "\n";

	for(auto it : post) {
		cout << it << ",";
	}
	cout << '\n';
}

void btree::singleTraversalForAll(node *leaf, vector<int> &pre, vector<int> &in, vector<int> &post) {
	stack<pair<node*, int>> st;
	st.push({leaf, 1});
	if(leaf != NULL) {
		while(!st.empty()) {
			auto it = st.top();
			st.pop();

			// for PREORDER | 1 ~> 2
			if(it.second == 1) {
				pre.push_back(it.first->value);
				it.second++;
				st.push(it);

				// push the left side of tree
				if(it.first->left != NULL) {
					st.push({it.first->left, 1});
				}
			}

			// for INORDER | 2 ~> 3
			else if(it.second == 2) {
				in.push_back(it.first->value);
				it.second++;
				st.push(it);

				// push the right side of tree
				if(it.first->right != NULL) {
					st.push({it.first->right, 1});
				}
			}

			// for POSTORDER
			else {
				post.push_back(it.first->value);
			}
		}
	}
}

// Level Order Traversal
void btree::levelOrder() {
    vector<vector<int>> ans;
	if(root != NULL) {
		levelOrder(root, ans);
		for(auto row : ans) {
			for(auto col : row) {
				cout << col << ",";
			}
			cout << '\n';
		}
	}
}

void btree::levelOrder(node *leaf, vector<vector<int>> &ans) {
	queue<node*>q;
	q.push(leaf);
	while(!q.empty()) {
		int size = q.size();
		vector<int>level;
		for(int i=0; i<size; i++) {
			node *parent = q.front();
			q.pop();
			if(parent->left != NULL) {
				q.push(parent->left);
			}
			if(parent->right != NULL) {
				q.push(parent->right);
			}
			level.push_back(parent->value);
		}
		ans.push_back(level);
	}
}

int main(){

	//btree tree;
	btree *tree = new btree();

	tree->insert(10);
	tree->insert(6);
	tree->insert(14);
	tree->insert(5);
	tree->insert(8);
	tree->insert(11);
	tree->insert(18);

	tree->preorder_print();
	tree->inorder_print();
	tree->postorder_print();
	tree->topView();
	tree->bottomView();
	tree->singleTraversalForAll();
	tree->levelOrder();
	delete tree;

}

// Outputs:

// 10,6,5,8,14,11,18,
// 5,6,8,10,11,14,18,
// 5,8,6,11,18,14,10,
// 5,6,10,14,18,
// 5,6,11,14,18,
// 10,6,5,8,14,11,18,
// 5,6,8,10,11,14,18,
// 5,8,6,11,18,14,10,
// 10,
// 6,14,
// 5,8,11,18,