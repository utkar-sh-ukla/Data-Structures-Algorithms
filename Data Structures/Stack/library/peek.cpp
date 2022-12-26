#include "../header/stack.h"

template<typename T>
T Stack<T>::peek() {
	if (isEmpty()) {
		cout << "Stack Empty\n";
	}
	else {
		return a[top];
	}
}
