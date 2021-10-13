#include <iostream>
#include <string>
using namespace std;
class shape{
protected:
float height,width;
public:
virtual void setheight()
{
cout<<"Please Enter Height= "<<endl;
cin>>height;
}
virtual void setwidth()
{
cout<<"Please Enter Width= "<<endl;
cin>>width;
}
virtual void getArea()=0;
};
class triangle:public shape
{
public:
void getArea()
{
cout<<"Area of triangle= "<<0.5*height*width<<endl;
}
};
class rectangle:public shape
{
public:
void getArea()
{
cout<<"Area of Rectangle= "<<height*width<<endl;
}	
};
int main() {
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Calculate the Area Of Triangle and Rectangle....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
shape *s1;
triangle t1;
rectangle a1;
s1=&t1;
cout<<"Area Of Triangle........"<<endl;
cout<<endl;
s1->setheight();
s1->setwidth();
s1->getArea();
s1=&a1;
cout<<endl;
cout<<"Area Of Rectangle......"<<endl;
cout<<endl;
s1->setheight();
s1->setwidth();
s1->getArea();
return 0;
}
