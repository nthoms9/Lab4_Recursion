/*
Nick Thoms
Data Structures 2020
Due: 2/25/2020
Lab 3: Stack
Description: This lab is an example of how a stack can be implemented using pointers to link items together.
             The specification file declares the methods and attributes in the "stack" class.
*/

#include<iostream>
#include<new>
#include"stack - Copy.h"

using namespace std;

// Default value for the head pointer is set.
stack::stack()
{
	head = nullptr;
}

// Memory in the list is deallocated.
stack::~stack()
{
	while (isEmpty() == false)
	{
		pop();
	}
}

// A check is made to see if there are any items on the list.
bool stack::isEmpty()
{
	if (head == nullptr)
		return true;
	else
		return false;
}

// A check is made to see if there is enough memory to store another value.
bool stack::isFull()
{
	nodeType* loc;
	try
	{
		loc = new nodeType;
		delete loc;
		return false;
	}
	catch (bad_alloc exception)
	{
		return true;
	}
}

// An item is added to the list using the "itemType" argument.
void stack::push(itemType item_)
{
	if (isFull() == false)
	{
		nodeType* newNode = new nodeType;
		newNode->item = item_;
		newNode->next = head;
		head = newNode;
	}
}

// The top node is deleted revealing the node underneath.
void stack::pop()
{
	if (isEmpty() == false)
	{
		nodeType* deleteNode = head;
		head = head->next;
		delete deleteNode;
	}
}

// A value of "itemType" is returned.
itemType stack::top()
{
	if (isEmpty() == false)
	{
		return head->item;
	}
	else
		return NULL;
}