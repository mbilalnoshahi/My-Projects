#include <iostream>
#include <cmath>
using namespace std;
int fab(int i)
{
if (i==0||i==1)
{
//	cout<<n;
return i;
}
else if (i>1)		
{		
return (fab(i-1)+fab(i-2));		
}		
}
int main() {
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check Fibonacci of a Number which you want to Enter......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int q;
int w=0;
cout<<"Please Enter the Number= ";
cin>>q;
while(w<q)
{
cout<<fab(w)<<"   ";
w++;
}
return 0;
}

