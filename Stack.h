#ifndef STACK_H
#define STACK_H
#include "SLinkedList.h"
#include "HeaderNode.h"
using namespace std;

template <class T>
class Stack : protected SLinkedList<T> {
private:
	HeaderNode<T>* list;

public:
	Stack();

	void push(T* data);
	void pop();
	T& top();

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
void Stack<T>::push(T& data) {
	this->addFront(data);
}

template <class T>
void Stack<T>::pop() {
	this->removeFront();
}

template <class T>
T& Stack<T>::top() {
	if (count > 0) {
		return this->list->front->data;
	}
}
#endif STACK_H
