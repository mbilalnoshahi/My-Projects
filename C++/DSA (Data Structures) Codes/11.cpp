#include<iostream>
using namespace std; 
int main()
{
cout<<"Assalamoalaikum......"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Enter Random numbers in the array,"
" then compiler will give you the sorted array......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
int size;		
int array[size],i,j,temp;
int *p;
cout<<"Please Enter the Size of the Array= "<<endl;
cin>>size;
p=array;
for(i=0;i<size;i++)
{
cout<<"Enter the Elements in the Array= "<<endl;
cin>>*p;
p++;
}
p=array;
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(*(p+i)>*(p+j))
{
temp=*(p+i);
*(p+i)=*(p+j);
*(p+j)=temp;
}
}
}
for(i=0;i<size;i++)
{
cout<<"Sorted array= "<<array[i]<<endl;
}
return 0;    
}
