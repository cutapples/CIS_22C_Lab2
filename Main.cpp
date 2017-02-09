#include <iostream>
#include <string>
#include "Stack.h"
#include "SLinkedList.h"
using namespace std;

int main() {
	Stack<int> intStack;

	int* a = new int(5);
	int* b = new int(4);
	int* c = new int(3);
	int* d = new int(2);
	int* e = new int(1);

	intStack.push(a);
	intStack.push(b);
	intStack.push(c);
	intStack.push(d);
	intStack.push(e);

	try {
		cout << "Poping int stack" << endl;
		intStack.top();
		intStack.pop();
		intStack.top();
		intStack.pop();
		intStack.top();
		intStack.pop();
		intStack.top();
		intStack.pop();
		intStack.top();
		intStack.pop();
		intStack.top();
		intStack.pop();
	}
	catch (int error) {
		if (error == -1){
			cout << "List is empty" << endl;
		}
	}

	try {
		
	}
	catch (int error) {
		if (error == -1){
			cout << "List is empty" << endl;
		}
	}

	delete a;
	delete b;
	delete c;
	delete d;
	delete e;

	system("pause");
	return 0;
}
