#include "../header/queue.h"

template<typename T>
bool Queue<T>::isFull() {
	return (rear + 1) % MAX_SIZE == front ? true : false;
}
