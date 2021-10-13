#include <iostream>
using namespace std;
int fac(int i)
{
if (i==1||i==0)
{
cout<<1<<"=";
return 1;
}
else if (i>1)
{
cout<<i<<"*";		
return i*fac(i-1);
}		
}
int main() {
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Calculate the Factorial of a Number which you want to Enter......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int q;
cout<<"Please Enter the Number= ";
cin>>q;
cout<<fac(q);
return 0;
}

