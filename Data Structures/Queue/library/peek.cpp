#include "../header/queue.h"

template<typename T>
T Queue<T>::peek() {
	if (front == -1) {
		cout << "Empty Queue \n";
		return -1;
	}

	return a[front];
}