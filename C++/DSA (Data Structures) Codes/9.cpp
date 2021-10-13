#include <iostream>
using namespace std;
int main()
{
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can insert the Number in the Array at the pOsition you want......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int size=7;
int arr1[size];
int dlt;
int i,j;
for(i=0;i<size;i++)
{
cout<<"Please Enter The Number in the Array= "<<endl;
cin>>arr1[i];	
}
cout<<"Please Enter the NumBer that you want to delete= "<<endl;
cin>>dlt;
for (i=0;i<size;i++)
{
if(arr1[i]==dlt)
{
{
for(j=i;j<size-1;j++)
{
arr1[j]=arr1[j+1];
}
}
}
}
for(i=0;i<size-1;i++)
{
cout<<"Your New Array is= "<<arr1[i]<<endl;
}
return 0;
}
