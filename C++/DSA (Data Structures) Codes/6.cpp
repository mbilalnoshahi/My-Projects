#include<iostream>
using namespace std;
int main()
{
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Found the Number in the Array......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int arr[5];
int req;
int location=-1;
cout<<"Enter 5 numbers to store in array= "<<endl;
for(int i=0; i<5; i++)
{
cin>>arr[i];
}
cout<<endl;
cout<<"Enter the number you want to find= "<<endl;
cin>>req;
cout<<endl;
for(int j=0;j<5;j++)
{
if(arr[j]==req)
location=j;
}
if(location!=-1)
{
cout<<"True, Required number is found out at the location:"<<location;
cout<<endl;
}
else
cout<<"False, Number is not found ";
return 0;
}
