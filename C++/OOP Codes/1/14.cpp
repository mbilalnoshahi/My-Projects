#include <iostream>
using namespace std;

class Students
{
	int student;
	public:
		Students()
		{
			student=0;
		}
		Students(int s)
		{
			student=s;
		}
void yourstudents()
{
	cout<<"Your Student is= "<<student<<endl;
		}		
		void operator++()
		{
			student=++student;
		}
		void operator--()
		{
			student=--student;
		}
		Students operator++(int)
		{
			Students d;
			student=student++;
			return d;
		}
		Students operator--(int)
		{
			Students d;
			student=student--;
			return d;
		}
		
};
int main ()
{
	cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Increment or Decrement the Number by using Prefixes and Postfixes....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
	Students c(7);
	cout<<"Increment By Prefixes...."<<endl;
	c.yourstudents();
	++c;
	cout<<endl;
	cout<<"Decrement By Prefixes...."<<endl;
		c.yourstudents();
	--c;
	cout<<endl;
	cout<<"Increment By Postfixes...."<<endl;
			c.yourstudents();
c++;
cout<<endl;
cout<<"Decrement By Postfixes...."<<endl;
			c.yourstudents();
c--;


	return 0;
}

