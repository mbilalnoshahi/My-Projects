#include <iostream>
using namespace std;
int main() {
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check that your Array in Even or Not......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int a[10],c=0;
for(int i=0;i<10;i++)
{
cout<<"please enter the numbers in the array= "<<endl;
cin>>a[i];
}
for(int i=0;i<9;i++)
{
if(a[i]%2==0)
{
c++;
}
}
if(c%2==0)
cout<<"True, Even Array......";
else
cout<<"False, Array is not Even...."<<endl;	
return 0;
}
