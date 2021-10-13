#include <iostream>
using namespace std;

int main()

{
	cout<<"..........Welcome to C++ Programing........"<<endl<<endl;
	cout<<"....Here you can SUM variables which you want to Enter...."<<endl<<endl;
	cout<<".........so let's Move........"<<endl<<endl;
	float *p,*s,*o;
	float a,b,c,sum;

	p=&a;
	
	s=&b;
	o=&c;
	cout<<"Enter First Value="<<endl;
	cin>>*p;
	cout<<"2nd Value="<<endl;
	cin>>*s;
	cout<<"3rd Value="<<endl;
	cin>>*o;
	sum=*p+*s+*o;
	cout<<"Result="<<sum<<endl;
	cout<<"Thanks for using my program"<<endl;
	
}
