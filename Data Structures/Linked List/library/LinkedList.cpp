#include "../header/LinkedList.h"
#include "add.cpp"
#include "addToHead.cpp"
#include "addToTail.cpp"
#include "clear.cpp"
#include "deleteAt.cpp"
#include "deleteHead.cpp"
#include "deleteTail.cpp"
#include "getNode.cpp"
#include "print.cpp"
#include "size.cpp"


// Constructor
template<typename T>
LinkedList<T>::LinkedList() {
	head = NULL;
	tail = NULL;
	_size = 0;

	recentFetched = head;
	recentIndex = 0;
	isCached = false;
}

// Destructor
template<typename T>
LinkedList<T>::~LinkedList() {
	Node<T>* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		delete temp;
	}

	tail = NULL;
	_size = 0;
	isCached = false;
}
