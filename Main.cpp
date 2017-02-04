#include <iostream>
#include <string>
#include "Stack.h"
#include "LinkedList.h"
using namespace std;

int main() {
	Stack<int> intStack;
	SLinkedList<string> stringStack;

	intStack.push(5);
	intStack.push(4);
	intStack.push(3);
	intStack.push(2);
	intStack.push(1);

	stringStack.addFront("Five");
	stringStack.addFront("Four");
	stringStack.addFront("Three");
	stringStack.addFront("Two");
	stringStack.addFront("One");

	try {
		cout << "Poping int stack" << endl;
		cout << intStack.pop() << endl;
		cout << intStack.pop() << endl;
		cout << intStack.pop() << endl;
		cout << intStack.pop() << endl;
		cout << intStack.pop() << endl;
		cout << intStack.pop() << endl;
	}
	catch (Stack<int>::ListIsEmpty) {
		cout << "List is empty" << endl;
	}

	try {
		cout << "Poping string stack" << endl;
		cout << "Current String Stack Count: " << stringStack.returnCount() << endl;
		stringStack.removeFront();
		cout << "Current String Stack Count: " << stringStack.returnCount() << endl;
		stringStack.removeFront();
		cout << "Current String Stack Count: " << stringStack.returnCount() << endl;
		stringStack.removeFront();
		cout << "Current String Stack Count: " << stringStack.returnCount() << endl;
		stringStack.removeFront();
		cout << "Current String Stack Count: " << stringStack.returnCount() << endl;
		stringStack.removeFront();
		cout << "Current String Stack Count: " << stringStack.returnCount() << endl;
		stringStack.removeFront();
	}
	catch (SLinkedList<string>::ListIsEmpty) {
		cout << "List is empty" << endl;
	}

	system("pause");
	return 0;
}