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
A()
{
a=0;
} 
A (int s)
{
a=s;
}
friend void display(A &c,B &d);  
};   
class B 
{ 
int b; 
public: 
B ( int e)
{
b=e;
}
friend void display(A &c,B &d);
}; 
void display(A &c,B &d)
{
if (c.a>d.b)
{
cout<<"A is Greater than B= "<<c.a;
}
else 
cout<<"B is Greater than A= "<<d.b;
}
int main() 
{ 
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You give Two Numbers to the Program and Check which Number is greater from the Given Numbers......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
A q(3); 
B w(7);  
display(q,w);
return 0; 
}
