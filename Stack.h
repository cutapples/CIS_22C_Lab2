#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "SLinkedList.h"
#include "HeaderNode.h"
using namespace std;

template <class T>
class Stack : protected SLinkedList<T> {
public:
	Stack();

	void push(T* data);
	void pop();
	void top();

	~Stack();
};

template <class T>
Stack<T>::Stack() {
	this->list = new HeaderNode<T>();
}

template <class T>
Stack<T>::~Stack() {
	this->emptyList();
	delete this->list;
}

template <class T>
void Stack<T>::push(T* data) {
	this->addFront(data);
}

template <class T>
void Stack<T>::pop() {
	this->removeFront();
}

template <class T>
void Stack<T>::top() {
	if (this->list->count > 0) {
		cout << *this->list->front->data;
	}
}
#endif STACK_H
