#include <iostream>
#include <string>
using namespace std;
class C{ //C=CAR
protected:
int p; //p=price
string c; //c=color
public:
C()
{
p=0;
c='\0';
}
C(int p1,string c1)
{
p=p1;
c=c1;
}
void set_C()
{
cout<<"Please Enter Price= "<<endl;
cin>>p;
cout<<"Please Enter color= "<<endl;
cin>>c;
}
};
class M:public C //M=MARUTI && C=CAR
{ 
protected:
int speed;
public:
M():C()
{
speed=0;
p=0;
c='\0';
}
M(int p2,string c2,int s2):C(p2,c2)
{
p=p2;
c=c2;
speed=s2;
}
void set_M()
{
set_C();
cout<<"Please Enter Speed Of Maruti= "<<endl;
cin>>speed;
}
void Display_M()
{
cout<<"Detail About Maruti........"<<endl<<endl;
cout<<"Price Of Maruti= "<<p<<endl;
cout<<"Color Of Maruti= "<<c<<endl;
cout<<"Speed Of Maruti= "<<speed<<endl<<endl<<endl;
}			
};
class M8:public M //M8=MARUTI800 && M=MARUTI
{
public:
M8():M()
{
speed=0;
p=0;
c='\0';
}
M8(int p3,string c3,int s3):M(p3,c3,s3)		
{
p=p3;
c=c3;
speed=s3;
}
void set_M8()
{
set_C();
cout<<"Please Enter Speed Of Maruti800= "<<endl;
cin>>speed;
}
void Display_M8()
{
cout<<"Detail About Maruti800........"<<endl<<endl;
cout<<"Price Of Maruti800= "<<p<<endl;
cout<<"Color Of Maruti800= "<<c<<endl;
cout<<"Speed Of Maruti800= "<<speed<<endl;			
}
};
int main() {
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check detail about your Car....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
M m1(780000,"Yellow",360);
m1.Display_M();
m1.set_M();
m1.Display_M();
M8 m2(500000,"Black",800);
m2.Display_M8();
m2.set_M8();
m2.Display_M8();
return 0;
}
