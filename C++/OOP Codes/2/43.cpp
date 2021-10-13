#include <iostream>
using namespace std;
template <class B>
class Stack{
B st[70];
int top;
public:
Stack()
{
cout<<"..........Starting Position......."<<endl<<endl;
top=-1;	
}	
void push(B b)
{
if(top>=70)
{
cout<<"********Your Stack is Already Full********"<<endl<<endl;
}
else
cout<<"Inserted value in Your Stack= "<<b<<endl<<endl;
st[++top]=b;
}
B pop()
{
if(top<=-1)
{
cout<<"*******Your Stack is Empty*******"<<endl<<endl;
}
else
cout<<"Position Of Element in the Stack= "<<st[top]<<endl<<endl;
top--;
cout<<"Another Position of Stack after removing from Top= "<<st[top]<<endl<<endl;
return top;
}
void display()
{
for(int i=top;i>=0;i--)
cout<<"Elements in th Stack= "<<st[i]<<endl<<endl;
}
};
int main()
{
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check Push and Pop the Elements in the Stack......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
Stack<char> y;
y.push('H');
y.push('A');
y.push('N');
y.push('Z');
y.push('A');
y.display();
y.pop();
y.pop();
y.display();
return 0;
}




