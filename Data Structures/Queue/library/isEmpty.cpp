#include "../header/queue.h"

template<typename T>
bool Queue<T>::isEmpty() {
	return (front == -1 && rear == -1);
}