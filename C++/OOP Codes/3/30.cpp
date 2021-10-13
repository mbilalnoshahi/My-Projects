#include <iostream>
#include <string>
using namespace std;
class shape{
protected:
int x,y;
public:
shape()
{
x=y=0;
}			
shape (int a,int b)
{
x=a;
y=b;
}
void set()
{
cout<<"Please Enter X= "<<endl;
cin>>x;
cout<<"Please Enter Y= "<<endl;
cin>>y;
}
virtual void display()=0;
};
class triangle:public shape
{
public:
void display()
{
cout<<"Area of triangle= "<<0.5*x*y<<endl;
}
};
class rectangle:public shape
{
public:
void display()
{
cout<<"Area of Rectangle= "<<x*y<<endl;
}	
};
int main() {
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You can Calculate the Area Of Triangle and Rectangle....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
shape *s1;
triangle t1;
rectangle r1;
s1=&t1;
cout<<"Area Of Triangle........"<<endl;
cout<<endl;
s1->set();
s1->display();
s1=&r1;
cout<<endl;
cout<<"Area Of Rectangle......"<<endl;
cout<<endl;
s1->set();
s1->display();
return 0;
}
