#include <iostream>
#include <string>
#include "Stack.h"
#include "SLinkedList.h"
#include "Currency.h"
#include "USDollars.h"
using namespace std;

int showChoices();
void checkChoice(int choice);
void showStackOptions();
void endProgram();
void useIntStack();
void useStringStack();
void useCurrencyStack();

int main(){
    int choice;
    

    
    choice = showChoices();
    checkChoice(choice);
}

int showChoices(){
    
    int choice;
    
    cout << "Would you like to see the functions of a stack?\n"
         << "1. Lets see it bro!\n"
         << "2. Nah im good bro.\n";
    cin >> choice;
    
    return choice;
}

void checkChoice(int choice){
    if(choice == 1){
        showStackOptions();
    }
    
    if(choice == 2){
        endProgram();
    }
}

void showStackOptions(){
    int choice2;
   
    Stack<string> stringStack;
    
    cout<< "What stack type would you like to see use the functions?\n"
    << "1. Int stack\n"
    << "2. String Stack\n";
    cin>> choice2;
    
    if (choice2 == 1){
        useIntStack();
    }
    
    else if(choice2 == 2){
        useStringStack();
    }
    
    else if (choice2 == 3){
        useCurrencyStack();
    }
}

void useIntStack(){
     Stack<int> intStack;
    int a, b, c, d, e;
    
    cout << "Give me 5 integers to use for the functions.\n";
    cin >> a >> b >> c >> d >> e;
    
  cout << "Stack functions coming up!\n";
  
    cout << "Pushing " << a << " " << b << " " << c << " " << d << " " << e << " onto the stack." << endl;
    
    intStack.push(a);
    intStack.push(b);
    intStack.push(c);
    intStack.push(d);
    intStack.push(e);
    
    cout << a << " " << b << " " << c << " " << d << " " << e << " has been added to the stack.\n";
   
    cout << "Time to pop the stack.\n";
    
    intStack.top();
    cout << " is on top of the stack.\n";

    cout << "Popping " << e << " from the stack.\n";
    intStack.pop();
    cout << e << " has been popped from the stack.\n";
    intStack.top();
    cout << " is on top of the stack.\n";

    cout << "Popping " << d << " from the stack.\n";
    intStack.pop();
    cout << d << " has been popped from the stack.\n";
    intStack.top();
    cout << " is on top of the stack.\n";

    cout << "Popping " << c << " from the stack.\n";
    intStack.pop();
    cout << c << " has been popped from the stack.\n";
    intStack.top();
    cout << " is on top of the stack.\n";

    cout << "Popping " << b << " from the stack.\n";
    intStack.pop();
    cout << b << " has been popped from the stack.\n";
    intStack.top();
    cout << " is on top of the stack.\n";

    cout << "Popping " << a << " from the stack.\n";
    intStack.pop();
    cout << a << " has been popped from the stack.\n";

    cout << "The stack is now empty.\n";
    
}

void useStringStack(){
    Stack<string> stringStack;
    
    string a, b, c, d, e;
    
    cout << "Give me 5 words to use for the functions.\n";
    cin >> a >> b >> c >> d >> e;
    
    cout << "Stack functions coming up!\n";
    
    cout << "Pushing " << a << ", " << b << ", " << c << ", " << d << ", " << e << " onto the stack." << endl;
    
    stringStack.push(a);
    stringStack.push(b);
    stringStack.push(c);
    stringStack.push(d);
    stringStack.push(e);
    
    cout << a << ", " << b << ", " << c << ", " << d << " and " << e << ", has been added to the stack.\n";
    
    cout << "Time to pop the stack.\n";
    
    stringStack.top();
    cout << ", is on top of the stack.\n";
    
    cout << "Popping " << e << " from the stack.\n";
    stringStack.pop();
    cout << e << ", has been popped from the stack.\n";
    stringStack.top();
    cout << ", is on top of the stack.\n";
    
    cout << "Popping " << d << ", from the stack.\n";
    stringStack.pop();
    cout << d << ", has been popped from the stack.\n";
    stringStack.top();
    cout << ", is on top of the stack.\n";
    
    cout << "Popping " << c << ", from the stack.\n";
    stringStack.pop();
    cout << c << ", has been popped from the stack.\n";
    stringStack.top();
    cout << ", is on top of the stack.\n";
    
    cout << "Popping " << b << ", from the stack.\n";
    stringStack.pop();
    cout << b << ", has been popped from the stack.\n";
    stringStack.top();
    cout << ", is on top of the stack.\n";
    
    cout << "Popping " << a << ", from the stack.\n";
    stringStack.pop();
    cout << a << ", has been popped from the stack.\n";
    
    cout << "The stack is now empty.\n";
   
    
}

void useCurrencyStack(){
    Stack<Currency> currencyStack;
   
    float f, g, h, i, j;
    
    Currency* a = new USDollars();
    Currency* b = new USDollars();
    Currency* c = new USDollars();
    Currency* d = new USDollars();
    Currency* e = new USDollars();
    
    cout << "Enter 5 different dollar and cents values (ex. 12.12)\n";
    
    cin >> f >> g >> h >> i >> j;
    
    a->addValue(f);
    b->addValue(g);
    c->addValue(h);
    d->addValue(i);
    e->addValue(j);

    cout << "Stack functions coming up!\n";
    cout << " Pushing ";
    cout << a << ", ";
    cout << b << ", ";
    cout << c << ", ";
    cout << d << ", ";
    cout << e << ", ";

    currencyStack.push(*a);
    currencyStack.push(*b);
    currencyStack.push(*c);
    currencyStack.push(*d);
    currencyStack.push(*e);

    cout << "Time to pop the stack.\n";
    
    currencyStack.top();
    cout << " is on the top of the stack\n";
    
    cout << "Popping ";
    cout << e;
    currencyStack.pop();
    
    currencyStack.top();
    cout << " is on the top of the stack\n";
    
    cout << "Popping ";
    cout << d;
    currencyStack.pop();
    
    currencyStack.top();
    cout << " is on the top of the stack\n";
    
    cout << "Popping ";
    cout << c;
    currencyStack.pop();
    
    currencyStack.top();
    cout << " is on the top of the stack\n";
    
    cout << "Popping ";
    cout << b;
    currencyStack.pop();

    currencyStack.top();
    cout << " is on the top of the stack\n";
    
    cout << "Popping ";
    cout << a;
    currencyStack.pop();
   
    cout << "The list is empty.\n";
    
    
    
}

void endProgram(){
    cout << "See you later bro!\n";
    
}
