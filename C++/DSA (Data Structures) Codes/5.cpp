#include <iostream>
using namespace std;
int main()
{
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check whether both Arrays are Equal or Not......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int arr1[3];
int arr2[3];
int x=0;	
for(int j=0;j<3;j++)
{
cout<<"Enter the Numbers in arr1= "<<endl;
cin>>arr1[j];
cout<<endl<<"Enter the Numbers in arr2= "<<endl;
cin>>arr2[j];
cout<<endl;
}
for(int i=0;i<3;i++)
{
if (arr1[i]!=arr2[i])
{
x++;
}
}
{
if (x==0)
{
cout<<"True, Arrays are Equal....."<<endl;
}
else
{
cout<<"False, Arrays are not Equal....."<<endl;
}
}
return 0;
}
