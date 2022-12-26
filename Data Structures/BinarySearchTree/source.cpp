#include "library/BinarySearchTree.cpp"


int main() {
	bst<int>* tree = new bst<int>();

	tree->insert(15);
	tree->insert(13);
	tree->insert(17);
	tree->insert(12);
	tree->insert(14);
	tree->insert(16);
	tree->insert(19);

	int number;
	cout << "Enter a node to be searched\n";
	cin >> number;

	if (tree->search(number) == true) cout << "Node Found exists in the Tree!\n";
	else cout << "Node NOT Found!\n";

	int deleteNumber;
	cout << "Enter a node to be deleted\n";
	cin >> deleteNumber;

	tree->deleteNode(deleteNumber);

	if (tree->isSymmetric() == true) cout << "The tree is symmetric\n";
	else cout << "The tree is not Symmetric\n";

	delete tree;
}