#include "../header/queue.h"

template<typename T>
void Queue<T>::enqueue(T x) {
	if (isFull()) {
		cout << "Queue is Full\n";
		return;
	}

	if (isEmpty()) {
		front = rear = 0;
	}
	else {
		rear = (rear + 1) % MAX_SIZE;
	}

	a[rear] = x;
}
