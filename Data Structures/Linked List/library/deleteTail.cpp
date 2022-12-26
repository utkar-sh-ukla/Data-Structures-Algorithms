#include "../header/LinkedList.h"

//Delete Node at Tail
template<typename T>
T LinkedList<T>::deleteTail() {
	if (_size <= 0) {
		return T();
	}

	isCached = false;

	if (_size >= 2) {
		Node<T>* temp = getNode(_size - 2);

		T popNode = temp->next->data;

		delete (temp->next);
		temp->next = NULL;
		tail = temp;

		_size--;

		return popNode;
	}
	else {
		T popNode = head->data;
		delete(head);
		head = tail = NULL;
		_size = 0;
		return popNode;
	}
}