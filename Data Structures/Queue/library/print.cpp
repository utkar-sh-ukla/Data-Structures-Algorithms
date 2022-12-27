#include "../header/queue.h"

template<typename T>
void Queue<T>::print() {
	int count = (rear + MAX_SIZE - front) % MAX_SIZE + 1;
	cout << "Queue : ";
	for (size_type i = 0; i < count; ++i) {
		int index = (front + i) % MAX_SIZE;
		cout << a[index] << " ";
	}
	cout << "\n";
}