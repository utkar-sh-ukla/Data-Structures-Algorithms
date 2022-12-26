#include <iostream>
#include "header/stack.h"
#include "library/stack.cpp"
using namespace std;

int main()
{
	Stack<int>* stack = new Stack<int>();
	stack->push(8);
	stack->print();

	stack->push(19);
	stack->print();

	stack->push(27);
	stack->print();

	stack->push(35);
	stack->print();

	stack->push(49);
	stack->print();

	stack->push(22);
	stack->print();

	stack->push(2);
	stack->print();

	stack->push(43);
	stack->print();

	stack->push(17);
	stack->print();

	stack->push(21);
	stack->print();

	stack->push(7);
	stack->print();

	stack->push(14);
	stack->print();

	stack->push(26);
	stack->print();

	stack->peek();

	stack->pop();
	stack->print();

	stack->pop();
	stack->print();

	stack->pop();
	stack->print();

	stack->pop();
	stack->print();

	stack->pop();
	stack->print();

	stack->pop();
	stack->print();

	stack->pop();
	stack->print();

	return 0;
}