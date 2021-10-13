#include <iostream> 
using namespace std;
void Selection_Sort(int * const,const int); 
void Swap(int * const,int * const); 
int main()
{
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Enter Random numbers in the array,"
" then compiler will give you the sorted array......"<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl<<endl;	
int size;
int array[size];
cout<<"Please Enter Array Size= "<<endl;
cin>>size;
cout<<endl;
for(int n=0;n<size;n++)
{
cout<<"Please Enter the Elements in the Array= "<<endl;
cin>>array[n];
}
cout<<endl;
cout<<"New Array After Sorting= "<<endl<<endl;
Selection_Sort(array,size); 
for ( int j=0;j<size;j++)
{
cout<<"Sorted Array= "<<array[j]<<endl;
cout<<endl;
}
return 0; 
} 
void Selection_Sort(int * const array,const int size)
{
int first; 
for(int i=0;i<size-1;i++)
{
first=i;
for(int index=i+1;index<size;index++)
if(array[index]<array[first])
{
first=index;
Swap(&array[i],&array[first]);
}
} 
} 
void Swap(int * const x,int * const y)
{
int temp=*x;
*x=*y;
*y=temp;
}
