#include "header/queue.h"
#include "library/queue.cpp"

int main()
{
	Queue<int>* queue = new Queue<int>();

	queue->enqueue(17);
	queue->print();

	queue->enqueue(56);
	queue->print();

	queue->enqueue(36);
	queue->print();

	queue->enqueue(19);
	queue->print();

	queue->enqueue(7);
	queue->print();

	queue->enqueue(2);
	queue->print();

	queue->enqueue(1);
	queue->print();

	queue->enqueue(33);
	queue->print();

	queue->enqueue(47);
	queue->print();

	queue->enqueue(63);
	queue->print();

	queue->enqueue(72);
	queue->print();

	queue->dequeue();
	queue->print();

	queue->dequeue();
	queue->print();

	queue->dequeue();
	queue->print();

	queue->dequeue();
	queue->print();

	queue->peek();

	queue->dequeue();
	queue->print();

	queue->dequeue();
	queue->print();

	return 0;
}