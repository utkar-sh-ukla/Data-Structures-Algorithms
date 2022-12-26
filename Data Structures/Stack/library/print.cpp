#include "../header/stack.h"

template<typename T>
void Stack<T>::print() {
	cout << "Stack : ";
	for (size_type i = 0; i <= top; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
}