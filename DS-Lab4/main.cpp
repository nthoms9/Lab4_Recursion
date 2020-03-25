/*
Nick Thoms
Data Structures 2020
Due: 2/25/2020
Lab 3: Stack
Description: This lab is an example of how a stack can be reversed using recursion. The stack object is taken from lab 3.
*/

#include <iostream>
#include "stack - Copy.h"

using namespace std;

void reverse(stack& stack1, stack& stack1R);
//Preconditions:  Two objects of the stack type have been created and are referred to as two seperate arguments in this function.
//Postconditions: If the first list is not empty the top item of the stack is added to the top of the new stack, then the function is called
//                again.

int main()
{
	stack stack1;
	stack stack1R;

	stack1.push(3);
	stack1.push(2);
	stack1.push(1);

	cout << "Before\n\n";

	reverse(stack1, stack1R);

	cout << "\nAfter\n\n";

	while (stack1R.isEmpty() == false)
	{
		cout << stack1R.top() << endl;
		stack1R.pop();
	}

}

void reverse(stack& stack1, stack& stack1R)
{
	
	if (stack1.isEmpty() == false)
	{
		stack1R.push(stack1.top());
		cout << stack1.top() << endl;
		stack1.pop();
		reverse(stack1, stack1R);
	}
	
	
}