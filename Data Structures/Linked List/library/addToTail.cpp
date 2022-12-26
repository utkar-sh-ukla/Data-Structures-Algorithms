#include "../header/LinkedList.h"

// Add at the Tail
template<typename T>
bool LinkedList<T>::addToTail(T _t) {
	Node<T>* temp = new Node<T>();
	temp->data = _t;
	temp->next = NULL;

	if (head) {
		tail->next = temp;
		tail = temp;
	}
	else {
		head = temp;
		tail = temp;
	}

	_size++;
	isCached = false;

	return true;
}