#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
#include <iomanip>
using namespace std;
class Stack2
{
	private:
		int st[100];
		int top;
		int n;
	public:
		Stack2()
		{
			cout<<"\nEnter length of stack:";
			cin>>n;
			top=-1;
		}
		void push();
		void pop ();
		void display();
};

#endif // MYSTACK

