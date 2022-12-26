#include "../header/LinkedList.h"

// Add to Head of Linked List
template<typename T>
bool LinkedList<T>::addToHead(T _t) {
	if (_size == 0) {
		return addToTail(_t);
	}

	Node<T>* temp = new Node<T>();
	temp->data = _t;
	temp->next = head;
	head = temp;

	_size++;
	isCached = false;

	return true;
}