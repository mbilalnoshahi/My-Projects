#include <iostream>
#include <string.h>
using namespace std;
class square
{
int length,width,area;
public:
square()
{
cout<<"Please Enter the Length= "<<endl;
cin>>length;
cout<<endl;
cout<<"Please Enter the Width= "<<endl;
cin>>width;
cout<<endl;
area=length*width;
}
void display()
{
cout<<"Area Of Square= "<<area<<endl;
cout<<endl;
}
};

int main()
{
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Calculate the Area of a Square....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
square b;
b.display();
cout<<"Thanks for Coming......";
return 0;
}
