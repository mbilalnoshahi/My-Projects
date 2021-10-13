#include <iostream>
using namespace std;
int main()
{
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can insert the Number which you want in the Array......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int size=7;
int arr1[size];
int value,pos,i;
for(i=0;i<size;i++)
{
cout<<"Please Enter The Number in the Array= "<<endl;
cin>>arr1[i];	
}
cout<<"Please Enter the Value Of Number in the Array= "<<endl;
cin>>value;
cout<<"Please Enter the Position Of numBer in the Array= "<<endl;
cin>>pos;
for(i=7;i>pos;i--)
{
arr1[i]=arr1[i-1];
}
arr1[pos]=value;
for(i=0;i<size;i++)
{
cout<<"New Array= "<<arr1[i]<<endl;
}
return 0;	
}
