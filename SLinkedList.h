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

	class ListIsEmpty{};

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
		this->count++;
	}
}

template <class T>
void SLinkedList<T>::removeFront() {
	if (count > 1) {
		Node<T>* tempPtr = this->head->next;
		this->head->next = tempPtr->next;
		delete tempPtr;
		this->count--;
	}
	else if (count == 1) {
		Node<T>* tempPtr = this->head->next;
		this->head->next = tempPtr->next;
		delete tempPtr;
		this->count--;
		this->tail->next = this->head;
	}
	else {
		throw ListIsEmpty();
	}
}

template <class T>
void SLinkedList<T>::removeBack() {
	if (count > 0) {
		Node<T>* tempPtr = this->tail->next;
		Node<T>* prevPtr = this->head;
		while (prevPtr->next != tempPtr) {
			prevPtr = prevPtr->next;
		}
		prevPtr->next = this->tail;
		this->tail->next = prevPtr;
		delete tempPtr;
		this->count--;
	}
	else {
		throw ListIsEmpty();
	}
}

template <class T>
bool SLinkedList<T>::search(T data) {
	Node<T>* tempPtr = this->head;
	while (tempPtr->next != this->tail) {
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
	return this->count;
}

template <class T>
void SLinkedList<T>::emptyList() {
	while (this->head->next != this->tail) {
		removeFront();
	}
}

template <class T>
SLinkedList<T>::~SLinkedList() {
	emptyList();
	delete this->head;
	delete this->tail;
}

#endif LINKEDLIST_H
