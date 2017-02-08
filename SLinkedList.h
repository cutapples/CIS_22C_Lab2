#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include "HeaderNode.h"
using namespace std;


template <class T>
class SLinkedList {
private:
	HeaderNode* list;

public:
	SLinkedList();

	void addFront(T& data);
	void addBack(T& data);

	void removeFront();
	void removeBack();

	bool search(T& data);

	int returnCount();
	void emptyList();

	~SLinkedList();
};

template <class T>
SLinkedList<T>::SLinkedList() {
	this->list = new HeaderNode<T>();
}

template <class T>
void SLinkedList<T>::addFront(T& data) {
	Node<T>* newNode = new Node<T>(data);
	if (this->list->count = 0) {
		this->list->front = newNode;
		this->list->back = newNode;
		this->list->count++;
	}
	else {
		newNode->next = this->list->front;
		this->list->front = newNode;
		this->list->count++;
	}
}

template <class T>
void SLinkedList<T>::addBack(T& data) {
	if (this->list->count = 0) {
		this->addFront(data);
	}
	else {
		Node<T>* newNode = new Node<T>(data);
		this->list->back->next = newNode;
		this->list->back = newNode;
		this->list->count++;
	}
}

template <class T>
void SLinkedList<T>::removeFront() {
	if (count > 1) {
		Node<T>* tempPtr = this->list->front;
		this->front->next = tempPtr->next;
		delete tempPtr;
		this->list->count--;
	}
	else if (count == 1) {
		Node<T>* tempPtr = this->list->front;
		this->list->front = nullptr;
		this->list->back = nullptr;
		delete tempPtr;
		this->list->count--;
	}
	else {
		throw -1;
	}
}

template <class T>
void SLinkedList<T>::removeBack() {
	if (count > 1) {
		Node<T>* tempPtr = this->list->back;
		Node<T>* prevPtr = this->list->front;
		while (prevPtr->next != tempPtr) {
			prevPtr = prevPtr->next;
		}
		prevPtr->next = nullptr;
		this->list->back = prevPtr;
		delete tempPtr;
		this->list->count--;
	}
	else if (count == 1) {
		Node<T>* tempPtr = this->list->back;
		this->list->front = nullptr;
		this->list->back = nullptr;
		delete tempPtr;
		this->list->count--;
	}
	else {
		throw -1;
	}
}

template <class T>
bool SLinkedList<T>::search(T& data) {
	Node<T>* tempPtr = this->list->front;
	if (tempPtr->data == data) {
		return true;
	}
	while (tempPtr->next != nullptr) {
		if (tempPtr->data == data) {
			return true;
		}
		else {
			tempPtr = tempPtr->next;
		}
	}
	return false;
}

template <class T>
int SLinkedList<T>::returnCount() {
	return this->list->count;
}

template <class T>
void SLinkedList<T>::emptyList() {
	while (this->list->count > 0) {
		removeFront();
	}
}

template <class T>
SLinkedList<T>::~SLinkedList() {
	emptyList();
	delete this->list;
}

#endif LINKEDLIST_H
