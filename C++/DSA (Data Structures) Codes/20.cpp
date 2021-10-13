#include <iostream>
using namespace std;

void swap(int &w,int &r)
{
	int temp=w;
	w=r;
	r=temp;
}
int partition(int arr1[],int start,int end)
{
	int index=start-1;
	int pivot=arr1[end];
	for(int j=start;j<end;j++)
	{
		if(arr1[j]<=pivot)
		{
			swap(arr1[++index],arr1[j]);
			
		}
	}
	swap(arr1[++index],arr1[end]);
	return index;
}
void quicksorthelp(int arr[],int start,int end)
{
	if (start<end)
	{
		int index=partition(arr,start,end);
		quicksorthelp(arr,start,index-1);
		quicksorthelp(arr,index+1,end);
	}
}
void printArray(int a[],int n)
{
	for(int y=0;y<n;y++)
	{
		cout<<a[y]<<endl;
	}
}
void quicksort(int a[],int n)
{
	quicksorthelp(a,0,n-1);
}
int main()
{
	int n=100;
	int a[n];
	cout<<"PLease Enter the size of the Array= "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the Elements in the Array= "<<endl;
		cin>>a[i];
	}
	cout<<"Before Quick Sort: "<<endl;
	printArray(a,n);
	quicksort(a,n);
	cout<<"After Quick Sort: "<<endl;
	printArray(a,n);
	return 0;
	
}
