#include <iostream>
#include <string>
using namespace std;
class W_H{ //W_H=WATER HABITAT
public:
void Display_WH()
{
cout<<"These Type Of Animal Lived in Water......."<<endl;			
}		
};
class L_H //L_H=LAND HABITAT
{ 
public:
void Display_LH()
{
cout<<"These Type Of Animal Lived On land......"<<endl;
}
};
class A:public W_H,public L_H //A=AMPHIBIANS && W_H=WATER HABITAT && L_H=LAND HABITAT
{
};
int main() {
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Know About Water Habitat and LAnd HAbitat Animals....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
A a;
a.Display_LH();
a.Display_WH();
return 0;
}

