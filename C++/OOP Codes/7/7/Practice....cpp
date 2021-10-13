#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int avg(int a,int b)
{
	int avr;
	avr=(a+b)/2;
	cout<<avr;
}
float avg(float a,float b)
{
	float avr;
	avr=(a+b)/2;
	cout<<avr;
}
double avg(double a,double b)
{
	double avr;
	avr=(a+b)/2;
	cout<<avr;
}
int main() {
	cout<<"..........Welcome to C++ Programing........"<<endl;
	cout<<"....Here you can find out the Average of the Numbers which want to Enter...."<<endl;
	cout<<".........so let's Move........"<<endl;
	int x,y;
	cout<<"Please Enter the Number="<<endl;
	cin>>x;
	cout<<"Please Enter 2nd Number="<<endl;
	cin>>y;
	cout<<"Average="<<endl;
	avg(x,y);
	cout<<endl<<endl;
	float m,n;
	cout<<"Enter float number="<<endl;
	cin>>m;
	cout<<"Enter 2nd float number="<<endl;
	cin>>n;
	cout<<"Average="<<endl;
	avg(m,n);
	cout<<endl<<endl;
	double g,h;
	
	cout<<"1st number="<<endl;
	cin>>g;
	cout<<"2nd number="<<endl;
	cin>>h;
	cout<<"Average="<<endl;
	avg(g,h);
	cout<<"........Thanks for using my Program......."<<endl;
	return 0;
}
