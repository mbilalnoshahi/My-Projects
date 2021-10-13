#include<iostream>
using namespace std;
int main()
{
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Reverse your Entered Array......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int arr[7];
int size, i, j, temp;
cout<<"Enter array size= "<<endl;
cin>>size;
cout<<"Enter array elements= "<<endl;
for(i=0; i<size; i++)
{
cin>>arr[i];
}
j=i-1; 
i=0; 
while(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}
cout<<"Reverse of the Array is= "<<endl;
for(i=0; i<size; i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
