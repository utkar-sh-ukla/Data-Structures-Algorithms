#include "../header/LinkedList.h"

// Delete at Head
template<typename T>
T LinkedList<T>::deleteHead() {
	if (_size <= 0) {
		return T();
	}

	if (_size > 1) {
		Node<T>* temp = head->next;
		T popNode = head->data;
		delete(head);
		head = temp;

		_size--;
		isCached = false;

		return popNode;
	}
	else {
		return deleteTail();
	}
}
