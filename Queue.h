#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "SLinkedList.h"
#include "HeaderNode.h"
using namespace std;

template <class T>
class Queue : protected SLinkedList<T> {
public:

	void enqueue(T& data);
	void dequeue();
	void front();
};

template <class T>
void Queue<T>::enqueue(T& data) {
	this->addBack(data);
}

template <class T>
void Queue<T>::dequeue() {
	this->removeFront();
}

template <class T>
void Queue<T>::front() {
	if (this->list->count > 0) {
		cout << *this->list->front->data;
	}
}
#endif QUEUE_H