
#include<iostream>
using namespace std;

class angle{
	int degrees;
	float minutes;
	char direction;
public:
	angle(int deg, float min, char dir)
	{ 
	degrees=deg, minutes=min, direction=dir;
	}
	void getAngle(int deg, float min, char dir)
	{
	 degrees=deg; minutes=min; direction=dir;
	 }
	void disp() const
	 { 
	cout<<degrees<<"\xF8"<<minutes<<"\'"<<direction<<endl;
	}
	};

int main()
{
	angle A(17, 31.5f, 'S');
	int a; float b; char c;
    
	cout<<"Enter degrees  : "; cin>>a;
	cout<<"Enter minutes  : "; cin>>b;
	cout<<"Enter direction: "; cin>>c;
	A.getAngle(a, b, c);
	A.disp();
	}
