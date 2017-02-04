#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"
using namespace std;

template <class T>
class Stack : public SLinkedList<T> {
private:
	Node<T>* head;
	Node<T>* tail;
	int count;
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
	Node<T>* newNode = new Node<T>(data);
	if (this->head->next == this->tail) {
		this->tail->next = newNode;
	}
	newNode->next = this->head->next;
	this->head->next = newNode;
	this->count++;
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