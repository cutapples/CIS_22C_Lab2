#include <iostream>
#include <string>
#include "Queue.h"
#include "SLinkedList.h"
#include "Currency.h"
#include "USDollars.h"
using namespace std;

int showChoices();
void checkChoice(int choice);
void showQueueOptions();
void endProgram();
void useIntQueue();
void useStringQueue();
void useCurrencyQueue();

int main(){
    int choice;
    

    
    choice = showChoices();
    checkChoice(choice);
}

int showChoices(){
    
    int choice;
    
    cout << "Would you like to see the functions of a queue?\n"
         << "1. Lets see it bro!\n"
         << "2. Nah im good bro.\n";
    cin >> choice;
    
    return choice;
}

void checkChoice(int choice){
    if(choice == 1){
        showQueueOptions();
    }
    
    if(choice == 2){
        endProgram();
    }
}

void showQueueOptions(){
    int choice2;
   
    Queue<string> stringStack;
    
    cout<< "What  queue type would you like to see use the functions?\n"
    << "1. Int Queue\n"
    << "2. String Queue\n";
    cin>> choice2;
    
    if (choice2 == 1){
        useIntQueue();
    }
    
    else if(choice2 == 2){
        useStringQueue();
    }
    
    else if (choice2 == 3){
        useCurrencyQueue();
    }
}

void useIntQueue(){
     Queue<int> intQueue;
    int a, b, c, d, e;
    
    cout << "Give me 5 integers to use for the functions.\n";
    cin >> a >> b >> c >> d >> e;
    
  cout << "Queue functions coming up!\n";
  
    cout << "Enqueuing " << a << " " << b << " " << c << " " << d << " " << e << " onto the queue." << endl;
    
    intQueue.enqueue(a);
    intQueue.enqueue(b);
    intQueue.enqueue(c);
    intQueue.enqueue(d);
    intQueue.enqueue(e);
    
    cout << a << " " << b << " " << c << " " << d << " " << e << " has been added to the queue.\n";
   
    cout << "Time to dequeue the queue.\n";
    
    intQueue.front();
    cout << " is in front of the queue.\n";

    cout << "Dequeuing " << e << " from the queue.\n";
    intQueue.dequeue();
    cout << e << " has been dequeued from the queue.\n";
    intQueue.front();
    cout << " is in front of the queue.\n";

    cout << "Dequeuing " << d << " from the queue.\n";
    intQueue.dequeue();
    cout << d << " has been dequeued from the queue.\n";
    intQueue.front();
    cout << " is in front of the queue.\n";

    cout << "Dequeuing " << c << " from the queue.\n";
    intQueue.dequeue();
    cout << c << " has been dequeued from the queue.\n";
    intQueue.front();

    cout << " is in front of the queue.\n";

    cout << "Dequeuing " << b << " from the queue.\n";
    intQueue.dequeue();
    cout << b << " has been dequeued from the queue.\n";
    intQueue.front();

    cout << " is in front of the queue.\n";

    cout << "Dequeuing " << a << " from the queue.\n";
    intQueue.dequeue();
    cout << a << " has been dequeued from the queue.\n";

    cout << "The queue is now empty.\n";
    
}

void useStringQueue(){
    Queue<string> stringQueue;
    
    string a, b, c, d, e;
    
    cout << "Give me 5 words to use for the functions.\n";
    cin >> a >> b >> c >> d >> e;
    
    cout << "Queue functions coming up!\n";
    
    cout << "Enqueing " << a << ", " << b << ", " << c << ", " << d << ", " << e << " onto the queue." << endl;
    
    stringQueue.enqueue(a);
    stringQueue.enqueue(b);
    stringQueue.enqueue(c);
    stringQueue.enqueue(d);
    stringQueue.enqueue(e);
    
    cout << a << ", " << b << ", " << c << ", " << d << " and " << e << ", has been added to the queue.\n";
    
    cout << "Time to dequeue the queue.\n";
    
    stringQueue.front();
    cout << ", is int front of the queue.\n";
    
    cout << "dequeing " << e << " from the queue.\n";
    stringQueue.dequeue();
    cout << e << ", has been dequeued from the queue.\n";
    stringQueue.front();
    cout << ", is in front of the queue.\n";
    
    cout << "Dequeing " << d << ", from the queue.\n";
    stringQueue.dequeue();
    cout << d << ", has been dequeued from the queue.\n";
    stringQueue.front();
    cout << ", is in front of the queue.\n";
    
    cout << "Dequeing " << c << ", from the queue.\n";
    stringQueue.dequeue();
    cout << c << ", has been dequeued from the queue.\n";
    stringQueue.front();
    cout << ", is in front of the queue.\n";
    
    cout << "Dequeing " << b << ", from the queue.\n";
    stringQueue.dequeue();
    cout << b << ", has been dequeued from the queue.\n";
    stringQueue.front();
    cout << ", is in front of the queue.\n";
    
    cout << "Dequeuing " << a << ", from the queue.\n";
    stringQueue.dequeue();
    cout << a << ", has been dequeued from the queue.\n";
    
    cout << "The queue is now empty.\n";
   
    
}

void useCurrencyQueue(){
    Queue<Currency> currencyQueue;
   
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

    cout << "Queue functions coming up!\n";
    cout << " Enqueing ";
    cout << a << ", ";
    cout << b << ", ";
    cout << c << ", ";
    cout << d << ", ";
    cout << e << ", ";

    currencyQueue.enqueue(*a);
    currencyQueue.enqueue(*b);
    currencyQueue.enqueue(*c);
    currencyQueue.enqueue(*d);
    currencyQueue.enqueue(*e);

    cout << "Time to dequeue the queue.\n";
    
    currencyQueue.front();
    cout << " is in the front of the queue\n";
    
    cout << "dequeing ";
    cout << e;
    currencyQueue.dequeue();
    
    currencyQueue.front();
    cout << " is in the front of the queue\n";
    
    cout << "dequeuing ";
    cout << d;
    currencyQueue.dequeue();
    
    currencyQueue.front();
    cout << " is in the front of the queue\n";
    
    cout << "dequeuing ";
    cout << c;
    currencyQueue.dequeue();
    
    currencyQueue.front();
    cout << " is in the front of the queue\n";
    
    cout << "dequeuing ";
    cout << b;
    currencyQueue.dequeue();

    currencyQueue.front();
    cout << " is in the front of the queue\n";
    
    cout << "Dequeuing ";
    cout << a;
    currencyQueue.dequeue();
   
    cout << "The queue is empty.\n";
    
    
    
}

void endProgram(){
    cout << "See you later bro!\n";
    
}
