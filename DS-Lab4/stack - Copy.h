/*
Nick Thoms
Data Structures 2020
Due: 2/25/2020
Lab 3: Stack
Description: This lab is an example of how a stack can be implemented using pointers to link items together.
             This cpp file is used to define the class methods.
*/

#ifndef STACK_H
#define STACK_H

#include<string>

using namespace std;

typedef int itemType;  // A typedef statement is used to define the item type.

struct nodeType     // "nodeType" is a container for the items in the stack.
{
	itemType item;
	nodeType* next;
};

class stack
{

public:

	//Preconditions:  An object of "stack" type is  declared in the client file.
	//Postconditions: Default values are set to the attibutes of the created object.
	stack();

	//Preconditions:  The constructor has been called.
	//Postconditions: Dynamically allocated memory is deleted.
	~stack();

	//Preconditions:  The constructor has been called.
	//Postconditions: A bool value is returned true if the stack is empty, otherwise "false" is returned.
	bool isEmpty();

	//Preconditions:  The constructor has been called.
	//Postconditions: A bool value is returned true if the stack is full, otherwise "false" is returned.
	bool isFull();

	//Preconditions:  Constructor has been called.
	//Postconditions: If the list is not full and memory is allocated and an item will be added to the stack.
	void push(itemType item_);

	//Preconditions:  The constructor  has been called.
	//Postconditions  If the list is not empty memory for the top node of the stack is deleted.
	void pop();

	//Preconditions:  The constructor has been called.
	//Postconditions: If the list is not empty a value of the "itemType" will be returned otherwise "NULL" is
	//                returned.
	itemType top();


private:

	nodeType* head;  // Head is a pointer to the top of the stack.

};

#endif
