#include "../header/queue.h"
#include "dequeue.cpp"
#include "enqueue.cpp"
#include "isEmpty.cpp"
#include "isFull.cpp"
#include "peek.cpp"
#include "print.cpp"

template<typename T>
Queue<T>::Queue() {
	front = -1;
	rear = -1;
	size = 0;
}