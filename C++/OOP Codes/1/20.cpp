#include <iostream>
#include <string.h>
#include <cmath>
#include <conio.h>
using namespace std;
class B;
class A
{
int a;
public:		
A (int x)
{
a = x;
}
friend class B;			
};
class B
{
int b;
public:
B (int y)
{
b=y;
}
void display(A &m);
};
void B::display(A &m)
{
cout<<"Power of given numbers= "<<pow(m.a,b)<<endl;
cout<<"Multiplication of given numbers= "<<m.a*b<<endl;
cout<<"Division of given numbers= "<<m.a/b<<endl;
}
int main()
{
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Find out Power,Multiplication and Division Value of a Numbers which you have Entered......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
A s(7);
B t(3);
t.display(s);
}
