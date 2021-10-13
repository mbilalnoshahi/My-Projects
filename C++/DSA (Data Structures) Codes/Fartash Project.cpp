#include <iostream>
#include <string.h>
using namespace std;

void Rot_Array(string Arr[],int n)
{
	string first_element;
	first_element=Arr[0];			
			for(int i=0;i<=n-1;i++)
			{
				Arr[i]=Arr[i+1];
			}
			Arr[n-1]=first_element;
}
void l_rotate(string Arr[], int x, int n) 
{ 
    for (int i=0;i<x;i++) 
        Rot_Array(Arr,n); 
} 
void print(string first_Arr[],string second_Arr[],int n)
{
		cout<<"elements in first array are: "<<endl;
	for(int i=0;i<=n-1;i++)
		{
		    cout<<first_Arr[i]<<"  ";
		}		
	cout<<"elements in second array are: "<<endl;
	for(int j=0;j<=n-1;j++)
		{
		    cout<<second_Arr[j]<<"  ";
		}
}
void check_if_equ(string first_Arr[],string second_Arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(first_Arr[i]!=second_Arr[i])
		{
			count=1;
			break;
		}
	}
	if(count==0)
	{
		cout<<"both arrays are equal"<<endl;		
	}
	else if(count==1)
	{
	cout<<"both arrays are not equal"<<endl;
    }
}
void Array_Combining(string first_Arr[],int n)
{
	string w[100];
	for(int y=0;y<n;y++)
	{
			w[y]=first_Arr[y];
			w[y+n]=first_Arr[y];
	}	
	for(int i=0;i<n+n;i++)
	{	
		cout<<w[i]<<" ";
	}
}
void quick_sort(string *Arr,int low,int high); 
int bin_search(string Arr[], int low,int high,string x);  
bool check_subset(string first_Arr[],string second_Arr[],int m,int n) 
{  
    quick_sort(first_Arr,0,m-1); 
    for (int i=0; i<n; i++) 
    { 
        if (bin_search(first_Arr,0,m-1,second_Arr[i])==-1) 
        return 0; 
    } 
    return 1; 
} 

int bin_search(string Arr[],int low, 
                    int high,string x) 
{ 
    if(high>=low) 
    { 
        int middle=(low+high)/2; 
        if((middle==0 || x>Arr[middle-1]) && (Arr[middle]==x)) 
            return middle; 
        else if(x>Arr[middle]) 
            return bin_search(Arr,(middle+1),high,x); 
        else
            return bin_search(Arr,low,(middle-1),x); 
    } 
    return -1; 
}  
void swap(string *a,string *b) 
{ 
    string var;
	var=*a; 
    *a=*b; 
    *b=var; 
} 
int partition(string Arr[],int low,int high) 
{ 
    string s=Arr[high]; 
    int i=(low-1); 
    for (int j=low;j<=high-1;j++) 
    { 
        if(Arr[j]<=s) 
        { 
            i++; 
            swap(&Arr[i], &Arr[j]); 
        } 
    } 
    swap(&Arr[i+1], &Arr[high]); 
    return (i+1); 
} 
void quick_sort(string Arr[],int low,int high) 
{ 
    int partition_index; /* Partitioning index */
    if(low<high) 
    { 
        partition_index=partition(Arr,low,high); 
        quick_sort(Arr,low,partition_index-1); 
        quick_sort(Arr,partition_index+1,high); 
    } 
} 
int main() {
	int size=100;
	string arr1[size];
	string arr2[size];
	cout<<"enter the size of the arrays: "<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"enter the elements in first array: "<<endl;
	cin>>arr1[i];
	}
	for(int j=0;j<size;j++)
	{
		cout<<"enter the elements in second array: "<<endl;
		cin>>arr2[j];
	}
	print(arr1,arr2,size);
	check_if_equ(arr1,arr2,size);
	l_rotate(arr1,2,size);
	print(arr1,arr2,size);
	check_if_equ(arr1,arr2,size);
    Array_Combining(arr1,size);
    if(check_subset(arr1,arr2,size,size)) 
        cout<<"second_array is subset of first_array "; 
    else
        cout<<"second_array is not a subset of first_array";  
    return 0; 
}

