#include "../header/queue.h"

template<typename T>
T Queue<T>::dequeue() {
	if (isEmpty()) {
		cout << "Queue is Full\n";
		return 0;
	}
	else if (front == rear) {
		size_type temp = a[rear];
		rear = front = -1;
		return temp;

	}
	else {
		T dequeueNode = a[front];
		front = (front + 1) % MAX_SIZE;
		return dequeueNode;
	}

}