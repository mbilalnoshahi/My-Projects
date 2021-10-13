#include<iostream>
using namespace std; 

void bubble(int *ptr,int s)
{
int i,j;
int temp;
for(i=1;i<s;i++)
 {
  for(j=0;j<s-i;j++)
   {
    if(*(ptr+j)>*(ptr+j+1))
     {
      temp=*(ptr+j);
      *(ptr+j)=*(ptr+j+1);
      *(ptr+j+1)=temp;
     }
   }

}


}


int main()
{
int arr[10];
int i;
int size;
cout<<"Enter the size of array: "<<endl;
cin>>size;
cout<<"Enter the element: "<<endl;
for(i=0;i<size;i++)
cin>>arr[i];

cout<<"Before sorting"<<endl;
for(i=0;i<size;i++)
 cout<<arr[i]<<" ";

 bubble(arr,size);

cout<<"After sorting"<<endl;
for(i=0;i<size;i++)
 cout<<arr[i]<<" ";
return 0;
}
