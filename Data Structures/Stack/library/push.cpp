#include "../header/stack.h"

template<typename T>
void Stack<T>::push(T x) {
	if (top == MAX_SIZE - 1) {
		cout << "Stack Overflow\n";
	}
	else {
		a[++top] = x;
	}
}
