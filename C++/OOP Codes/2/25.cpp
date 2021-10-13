#include <iostream>
using namespace std;
class S //S=SHAPE
{
protected:
int x,y;
public:
S()
{
x=0;
y=0;
}
S(int x1,int y1)		
{
x=x1;
y=y1;
}
void set_X()
{
cout<<endl;	
cout<<"Enter Value Of X= "<<endl;
cin>>x;
}
void set_Y()
{
cout<<endl;	
cout<<"Enter Value Of Y= "<<endl;
cin>>y;
}		
};
class R:public S //R=RECTANGLE && S=SHAPE
{
private:
int l,w; // l=length && w=width
public:
R():S()
{
l=0;
w=0;
}
R(int x2,int y2):S(x2,y2)
{
l=x2;
w=y2;
}
void rec_area()
{
cout<<endl;	
cout<<"Area of a Rectangle= "<<x*y<<endl;
}
};
class E:public S //E=ELLIPSE && S=SHAPE
{
int minor_axis,major_axis;
public:
E():S()
{
minor_axis=0;
major_axis=0;
}
E(int x3,int y3):S(x3,y3)
{
minor_axis=x3;
major_axis=y3;
}
void elip_area()
{
cout<<endl;
cout<<"Area of a Ellipse= "<<3.14*x*y<<endl;
}
};
class T:public S //T=TRIANGLE && S=SHAPE
{
int base,height;
public:
T():S()
{
base=0;
height=0;
}
T(int x4,int y4):S(x4,y4)
{
base=x4;
height=y4;
}
void tri_area()
{
cout<<endl;
cout<<"Area of a Triangle= "<<0.5*x*y<<endl;
}
};
int main() {
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Calculate Area Of Rectangle,Ellipse and Triangle......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
R r(7,8);
r.rec_area();
r.set_X();
r.set_Y();
r.rec_area();
E e(4,7);
e.elip_area();
e.set_X();
e.set_Y();
e.elip_area();
T t(6,7);
t.tri_area();
t.set_X();
t.set_Y();
t.tri_area();
return 0;
}
