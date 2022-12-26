#include "../header/LinkedList.h"

// Print Linked List
template<typename T>
void LinkedList<T>::print() {
	Node<T>* temp = head;

	cout << "The Linked List is : ";

	while (temp) {
		printf(" %d", temp->data);
		temp = temp->next;
	}

	cout << "\n";
}