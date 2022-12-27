#pragma once
#include <array>
#include <iostream>
using namespace std;

#define MAX_SIZE 15

template<typename T>
class Queue {
public:
	typedef typename array<T, MAX_SIZE>::size_type size_type;

	Queue();
	Queue(const Queue&) = default;
	~Queue() = default;

	Queue& operator =(const Queue&) = default;

	void enqueue(T x);
	T dequeue();
	bool isEmpty();
	T peek();
	bool isFull();
	void print();

private:
	array<T, MAX_SIZE> a;
	size_type front, rear, size;

};