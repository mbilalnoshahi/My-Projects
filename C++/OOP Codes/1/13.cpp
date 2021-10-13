#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Complex{
float real,imag;
public:
Complex()
 {
 	real=0;
 	imag=0;
 }
 Complex(float r,float i)
 {
 	real=r;
 	imag=i;
 }
 void print()
 {
 	
 	if (imag>0)
 	{
 		cout<<real<<"+"<<imag<<"i"<<endl;
	 }
	else
 	cout<<real<<imag<<"i"<<endl;
 }

 bool operator ==(const Complex&n)
  {
  
  	bool result;
  	result=(real==n.real )&& (imag==n.imag);
 		return result;
	}
 bool operator >(const Complex&n)
  {
  	bool result;
 	result=(real>n.real) && (imag>n.imag);
    return result;                                                                                                                                                                                
 }
 
  bool operator <(const Complex&n)
  {
  	bool result;
 	result=(real<n.real) && (imag<n.imag);
    return result;                                                                                                                                                                                
 }
 
};
int main() {
	cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check whether Complex Numbers are Smaller,Greater or Equal to Each Other....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;

	Complex c2(9,8);
	Complex c3(9,7);
	
	
	if (c2==c3)
	{
		cout<<"C2 is Equal to C3...."<<endl;
	}
	
	else if(c2>c3)
	{
		cout<<"C2 is greater...."<<endl;
	}
	else if (c2<c3)
	{
	cout<<"C3 is Greater...."<<endl;
}
	
	return 0;
}

