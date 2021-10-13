#include <iostream>
#include <string.h>
#include <cmath>
#include <conio.h>
using namespace std;
class Box;
class AREA_VOL
{
public:
void area(Box &B);
void vol(Box &B);
};
class Box{	
int length;
public:
void set()
{
cout<<"Enter the Length of a Box= "<<endl;
cin>>length;
cout<<endl;
}
friend void AREA_VOL::area(Box &B);
friend void AREA_VOL::vol(Box &B);
};
void AREA_VOL::area(Box &B)
{
cout<<"Area of a Box= "<<B.length*B.length<<endl;
}
void AREA_VOL:: vol (Box &B)
{
cout<<"Volume of a Box= "<<B.length*B.length*B.length<<endl;
}
int main() {
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Calculate the Area and Volume of a Box......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
Box b;
AREA_VOL a;
b.set();
a.area(b);
a.vol(b);
return 0;
}
