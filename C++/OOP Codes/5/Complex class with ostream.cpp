#include <iostream>
using namespace std;
 
class Complex
{
private:
    int real, imag;
public:
    Complex()
    {
    	real=0;
    	imag=0;
	}
	Complex(int r,int i)
	{
		real=r;
		imag=i;
	}
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in,  Complex &c);
};
 
ostream & operator << (ostream &out, const Complex &c)
{
    cout << c.real;
    cout << "+i" << c.imag << endl;
    return out;
}
 
istream & operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part= "<<endl;
    cin >> c.real;
    cout << "Enter Imaginary Part= "<<endl;
    cin >> c.imag;
    return in;
}
 
int main()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is= "<<c1<<endl;
   return 0;
}
