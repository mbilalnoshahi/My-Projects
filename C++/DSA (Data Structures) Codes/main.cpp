#include <iostream>


using namespace std;

push() //put number on stack
	{
		int var,top,n;
		int st[10];
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
int main()
{
   push();
    //s1.push();
    //s1.push();
   cout<<"pop values";
    //s1.pop();
    //s1.pop();
    //s1.display();

    return 0;
}
