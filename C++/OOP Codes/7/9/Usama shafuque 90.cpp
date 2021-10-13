
#include <iostream>
using namespace std;
class shape
{
protected:
float height;
float width;
public:
virtual void setHeight()
{
	}	
virtual void getarea()
{
	
}
virtual void setWidth()
{
}


};
class triangle:public shape
{
	public:
		void setHeight()
		{
			cout<<"enter height of triangle: "<<endl;
			cin>>height;
			
		}
		void setWidth()
		{
			cout<<"enter width of triangle: "<<endl;
			cin>>width;
		}
		void getarea()
		{
			cout<<"area of triangle: "<<height*width*0.5<<endl;
		}
		
};
class rectangle:public shape
{
	public:
		void setHeight()
		{
			cout<<"enter height of rectangle: "<<endl;
			cin>>height;
			
		}
		void setWidth()
		{
			cout<<"enter width of rectangle: "<<endl;
			cin>>width;
		}
		void getarea()
		{
			cout<<"area of rectangle: "<<height*width<<endl;
		}
		
};
int main() {
	shape *a;
	triangle b;
	rectangle c;
	a=&b;
	a->setHeight();
	a->setWidth();
	a->getarea();
	a=&c;
	a->setHeight();
	a->setWidth();
	a->getarea();
	return 0;
}
