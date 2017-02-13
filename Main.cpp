#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main() {
	Stack<int> intStack;

	int a = 5;
	int b = 4;
	int c = 3;
	int d = 2;
	int e = 1;

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
		if (error == -1) {
			cout << "List is empty" << endl;
		}
	}

	system("pause");
	return 0;
}
