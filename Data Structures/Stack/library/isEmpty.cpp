#include "../header/stack.h"

template<typename T>
bool Stack<T>::isEmpty() {
	if (top == -1) {
		return true;
	}
	else {
		return false;
	}
}