#include "../header/LinkedList.h"

// Fetch a node at a particular position
template<typename T>
Node<T>* LinkedList<T>::getNode(int index) {
	int _pos = 0;
	Node<T>* current = head;

	// Check if cached and immediately after the recently fetched
	if (isCached && recentIndex <= index) {
		_pos = recentIndex;
		current = recentFetched;
	}

	while (_pos < index && current) {
		current = current->next;
		_pos++;
	}

	if (_pos == index) {
		isCached = true;
		recentIndex = index;
		recentFetched = current;

		return current;
	}

	//return false;
}