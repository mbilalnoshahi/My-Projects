#include <iostream>
#include <string.h>
using namespace std;
class rectangle
{
int l,h;
public:	
rectangle()
{
l=0;
h=0;
}
~rectangle()
{
	
}
void set_area();
void show_area();
};
void rectangle::set_area()
{
cout<<"Please Enter the Length= "<<endl;
cin>>l;
cout<<endl;
cout<<"Please Enter the Height= "<<endl;
cin>>h;
cout<<endl;
}
void rectangle::show_area(){
cout<<l*h<<endl;
}

int main()
{
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Calculate the Area of a Square....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
rectangle r1;
r1.set_area();
r1.show_area();
cout<<"Thanks for Using my Program......";
return 0;
}
