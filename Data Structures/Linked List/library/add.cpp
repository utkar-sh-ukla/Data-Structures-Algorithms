#include "../header/LinkedList.h"

// Add at any index
template<typename T>
bool LinkedList<T>::add(int index, T _t) {
	if (index >= _size) {
		return addToTail(_t);
	}

	if (index == 0) {
		return addToHead(_t);
	}

	Node<T>* temp = new Node<T>();
	Node<T>* _prev = getNode(index - 1);

	temp->data = _t;
	temp->next = _prev->next;
	_prev->next = temp;

	_size++;
	isCached = false;

	return true;
}