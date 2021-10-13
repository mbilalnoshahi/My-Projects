#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int main()
{
	  int a,b,c;
	// ofstream f1;
	// ofstream f2;
	// ofstream f3;
	 ifstream f1;
	 ifstream f2;
	 ifstream f3;
	//f1.open("task.txt");
//	f2.open("oop.txt");
   f1.open("task.txt");
    f2.open("oop.txt");
    f3.open("result.txt");
/*	if (f1.is_open() && f2.is_open() &&  f3.is_open() )
	{
		cin>>a;
		f1<<a;
		f1.close();
		cin>>b;
		f2<<b;
		f2.close();
		f3<<a+b;
		f3.close();
		
	}*/

	if (f1.is_open() && f2.is_open() &&  f3.is_open() )
	{
	
		f1>>a;
		cout<<a;
		f1.close();
		cout<<endl;
		f2>>b;
		cout<<b;
		f2.close();
		cout<<endl;
		f3>>c;
		cout<<c;
		f3.close();

		
	}
	else
	cout<<"invalid input:";
}

