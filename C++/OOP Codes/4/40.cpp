#include <iostream>
#include <cmath>
using namespace std;
int squ(int i)
{
if (i==1)
{
return 1;
}
else if (i>1)
{
cout<<pow(i,2)<<"^";
return squ(i-1);
}		
}
int main() {
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check 'Squares of numbers upto integer' of a Number which you want to Enter......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int q;
cout<<"Please Enter a Number= ";
cin>>q;
cout<<squ(q);
return 0;
}

