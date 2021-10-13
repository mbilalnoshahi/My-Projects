#include <iostream>
#include  "Stack.h"

using namespace std;

void Stack2::push() //put number on stack
	{
		int var;
		if(top >= (n-1)) //error if stack full
		{
			cout << "\nError: stack is full pop first";
			//exit(1);
		}
		else
		{
		cout<<"\nenter value to push:";
		cin>>var;
		st[++top] = var;  //call push() in Stack class
		cout<<endl<<st[top]<<" is pushed into stack"<<endl;
		}
	}

