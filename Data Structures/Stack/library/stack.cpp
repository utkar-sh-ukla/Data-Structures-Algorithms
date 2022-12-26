#include "../header/stack.h"
#include "isEmpty.cpp"
#include "peek.cpp"
#include "pop.cpp"
#include "push.cpp"
#include "print.cpp"

template<typename T>
Stack<T>::Stack() {
	top = -1;
}