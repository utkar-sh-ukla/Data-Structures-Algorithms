#include "../header/LinkedList.h"

//Clear LinkedList

template<typename T>
void LinkedList<T>::clear() {
	while (size() > 0)
		deleteHead();
}
