#include <iostream>
#include <string>
using namespace std;
class Z //Z=ZOO
{
	
protected:
int a; //a=AGE
string n; // n=NAME
public:		
Z()
{
a=0;
n='\0';
}
Z(int a1,string n1)
{
a=a1;
n=n1;
}
void set_ZOO()
{
cout<<endl;	
cout<<"Enter Name Of Animal Or Bird= "<<endl;
cin>>n;
cout<<endl;
cout<<"Enter Age Of Animal Or Bird= "<<endl;
cin>>a;
}		
};
class B:public Z //B=BIRD && Z=ZOO
{
string feathers,wings;
public:
B():Z()
{
feathers='\0';
wings='\0';	
a=0;
n='\0';
}
B(int a2,string n2,string f,string w):Z(a2,n2)
{
feathers=f;
wings=w;	
a=a2;
n=n2;
}
void set_BIRD()
{
cout<<"Enter Feathers colour= "<<endl;
cin>>feathers;
cout<<"Enter Wings colour= "<<endl;
cin>>wings;
}
void Display_BIRD()
{
cout<<endl;
cout<<"Bird have Name= "<<n<<endl<<endl;
cout<<"Age of Bird= "<<a<<endl;
cout<<"Bird Feathers colours= "<<feathers<<endl;
cout<<"Bird Wings colour= "<<wings<<endl;
}
void Fly()
{
cout<<endl;
cout<<"All birds have wings, although not all birds fly........"<<endl;
}
};
class A:public Z //A=ANIMAL && Z=ZOO
{
string colour,characteristics;
public:
A():Z()
{
colour='\0';
characteristics='\0';	
a=0;
n='\0';
}
A(int a3,string n3,string c3,string c4):Z(a3,n3)
{
colour=c3;
characteristics=c4;	
a=a3;
n=n3;
}
void set_ANIMAL()
{
cout<<"Enter Colour Of Animal= "<<endl;
cin>>colour;
cout<<"Enter Characteristics Of Animal= "<<endl;
cin>>characteristics;
}
void Display_ANIMAL()
{
cout<<endl;
cout<<"Animal have Name= "<<n<<endl<<endl;
cout<<"Age Of Animal= "<<a<<endl;
cout<<"Colour Of Animal= "<<colour<<endl;
cout<<"Characteristics Of Animal= "<<characteristics<<endl;
}
};
int main() {
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check Names and Ages Of Animal and Birds Present in the ZOO......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
B bb(7,"Sparrow","Black Feathers","Purple Wings");
bb.Display_BIRD();
bb.set_ZOO();
bb.set_BIRD();
bb.Display_BIRD();
A aa(7,"Markhor","Grey","Mammal");
aa.Display_ANIMAL();
aa.set_ZOO();
aa.set_ANIMAL();
aa.Display_ANIMAL();
bb.Fly();
	return 0;
}
