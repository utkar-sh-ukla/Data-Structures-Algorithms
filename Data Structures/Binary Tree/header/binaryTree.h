#pragma once
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
	int value;
	node* left;
	node* right;
};

class btree {
public:
	btree();
	~btree();

	void insert(int key);
	node* search(int key);
	void destroy_tree();
	void inorder();
	void postorder();
	void preorder();
	void topView();
	void bottomView();
	void singleTraversalForAll();
	void levelOrder();
	void height();
	void count();
	void sum();
	void maxPath();
	void diameter();
	node* lca(int a, int b);
	int level(node* leaf, int key, int l);
	void distance(int a, int b);

private:
	void insert(int key, node* leaf);
	node* search(int key, node* leaf);
	void inorder(node* leaf);
	void postorder(node* leaf);
	void preorder(node* leaf);
	void topView(node* leaf);
	void bottomView(node* leaf);
	void singleTraversalForAll(node* leaf, std::vector<int>& pre, std::vector<int>& in, std::vector<int>& post);
	void levelOrder(node* leaf, vector<vector<int>>& ans);
	int height(node* leaf);
	int count(node* leaf);
	int sum(node* leaf);
	int maxPath(node* leaf);
	int diameter(node* leaf);
	node* lca(node* leaf, int a, int b);
	int distance(node* leaf, int a, int b);
	void destroy_tree(node* leaf);
	node* root;
};