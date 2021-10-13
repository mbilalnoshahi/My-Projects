#include <iostream>
using namespace std;
int main() {
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Find Out Max and Min Numbers in the Array you Entered......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int a[7],m,n;
for(int i=0;i<7;i++)
{
cout<<"please enter the numbers in the Array= "<<endl;
cin>>a[i];
}
m=a[0];
n=a[0];
for(int i=0;i<6;i++)
{
if(m>a[i+1])
{
m=a[i+1];    
}		
if(n<a[i+1])
{
n=a[i+1];		
}
}
cout<<"Min Value= "<<m<<endl;
cout<<"Max Value= "<<n<<endl;	
return 0;
}
