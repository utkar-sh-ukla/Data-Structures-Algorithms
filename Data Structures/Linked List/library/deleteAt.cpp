#include "../header/LinkedList.h"

// Remove at a given Position
template<typename T>
T LinkedList<T>::deleteAt(int index) {
	if (_size < 0 || index >= _size) {
		return T();
	}

	if (index == 0) {
		return deleteHead();
	}

	if (index == _size - 1) {
		return deleteTail();
	}

	Node<T>* temp = getNode(index - 1);
	Node<T>* deleteNode = temp->next;
	T deletedNode = deleteNode->data;
	temp->next = deleteNode->next;
	delete(deleteNode);

	_size--;
	isCached = false;

	return deletedNode;
}