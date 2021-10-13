#include <iostream>
#include <string>
using namespace std;
class ANI
{
	protected:
		string name;
		public:
			virtual void fun()=0;
			Animal(string n)
			{
				name=n;
			}
};
void ANI::fun()
{
	cout<<"Base....";
}
class Cat:public ANI
{

	public:
		Cat():ANI()
		{
		}
		void fun()
		{
			cout<<"This is a Cat..."<<endl;
		}
};
class Dog:public ANI
{
	public:
		void fun()
		{
			cout<<"This is a Dog..."<<endl;
		}
};

int main()
{
	ANI *a1;
	Cat c1;
	Dog d1;
	a1=&c1;
	a1->fun();
	a1=&d1;
	a1->fun();
	return 0;
}
