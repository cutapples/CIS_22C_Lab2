#ifndef STACK_H
#define STACK_H
#include "SLinkedList.h"
#include "HeaderNode.h"
using namespace std;

template <class T>
class Stack : protected SLinkedList<T> {
private:
	HeaderNode<T> list;

public:
	Stack();

	void push(T data);
	T pop();
	bool isEmpty();

	~Stack();
};

template <class T>
Stack<T>::Stack() {
	this->count = 0;
	this->head = new Node<T>();
	this->tail = new Node<T>();
	this->head->next = this->tail;
	this->tail->next = this->head;
}

template <class T>
Stack<T>::~Stack() {
	emptyList();
	delete this->head;
	delete this->tail;
}

template <class T>
void Stack<T>::push(T data) {
	this->addFront(data);
}

template <class T>
T Stack<T>::pop() {
	T tempData;
	if (count > 1) {
		Node<T>* tempPtr = this->head->next;
		this->head->next = tempPtr->next;
		tempData = tempPtr->data;
		delete tempPtr;
		this->count--;
	}
	else if (count == 1) {
		Node<T>* tempPtr = this->head->next;
		this->head->next = tempPtr->next;
		tempData = tempPtr->data;
		delete tempPtr;
		this->count--;
		this->tail->next = this->head;
	}
	else {
		throw ListIsEmpty();
	}
	return tempData;
}

template <class T>
bool Stack<T>::isEmpty() {
	if (count == 0) {
		return true;
	}
	else {
		return false;
	}
}
#endif STACK_H
