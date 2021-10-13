#include <iostream>
#include <string>
using namespace std;
class shape{
	protected:
		int x,y;
		public:
			shape()
			{
				x=y=0;
			}
			shape (int a,int b)
			{
				x=a;
				y=b;
			}
			void set()
			{
				cout<<"Please Enter X= "<<endl;
				cin>>x;
				cout<<"Please Enter Y= "<<endl;
				cin>>y;
			}
			virtual void show()=0;
};
void shape::show()
{
	cout<<"Base class"<<endl;
}
class triangle:public shape
{
public:
	void show()
	{
		cout<<"Area of triangle= "<<x*x*x<<endl;
	}
};
class rectangle:public shape
{
public:
void show()
{
	cout<<"Area of Rectangle= "<<0.5*x*y<<endl;
	}	
};

int main() {
	shape *s1;
	triangle t1;
	rectangle r1;
	s1=&t1;
	s1->set();
	s1->show();
	s1=&r1;
	s1->set();
	s1->show();
	return 0;
}
