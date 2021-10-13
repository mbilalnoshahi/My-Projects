#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,a,b,c,d,h;
	cout<<endl<<"Hi..!! WELCOME to C++ Programming"<<endl;
	cout<<endl<<"Please Enter the value= "<<endl;
	cin>>n; 
	a=n/1000;
	h=n%1000;
	b=h/100;
	h=h%100;
	c=h/10;
	h=h%10;
	d=h;
	if(a==d && b==c)
	{
		cout<<"of course its a symmetric number.";
	}
	else
	{
		cout<<"no, its not";
	}
}
	

		


