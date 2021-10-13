#include <iostream>
#include <string.h>
using namespace std;

void rotate_array(string arr[],int n)
{
	string temp=arr[0];			
			for(int j=0;j<=n-1;j++)
			{
				arr[j]=arr[j+1];
			}
			arr[n-1]=temp;
}
void left_rotate(string arr[], int shift, int n) 
{ 
    for (int i = 0; i < shift; i++) 
        rotate_array(arr, n); 
} 
void display(string A1[],string A2[],int N)
{
		cout<<endl<<"1st Array is= "<<endl;
	for(int i=0;i<=N-1;i++)
		{
		    cout<<A1[i]<<"  ";
		}		
	cout<<endl<<"2nd Array is= "<<endl;
	for(int k=0;k<=N-1;k++)
		{
		    cout<<A2[k]<<"  ";
		}
}
void equality(string A1[],string A2[],int N1)
{
	int flag=0;
	for(int i=0;i<N1;i++)
	{
		if(A1[i]!=A2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<endl<<"Arrays are Equal...."<<endl;		
	}
	else if(flag==1)
	{
	cout<<endl<<"Arrays are Not Equal..."<<endl;
    }
}
void concatenated_array(string Arr1[],int n)
{
	string w[100];
	for(int y=0;y<n;y++)
	{
			w[y]=Arr1[y];
			w[y+n]=Arr1[y];
	}	
	for(int t=0;t<n+n;t++)
	{	
		cout<<endl<<w[t]<<" ";
	}
}
void quickSort(string *arr, int start, int end); 
int binarySearch(string arr[], int low,  
                    int high, string x);  
/* Return 1 if arr2[] is a subset of arr1[] */
bool isSubset(string arr1[], string arr2[], 
                        int m, int n) 
{  
    quickSort(arr1, 0, m-1); 
    for (int i=0; i<n; i++) 
    { 
        if (binarySearch(arr1, 0, m - 1, 
                        arr2[i]) == -1) 
        return 0; 
    } 
    /* If we reach here then all elements 
     of arr2[] are present in arr1[] */
    return 1; 
} 
/* FOLLOWING FUNCTIONS ARE ONLY FOR  
    SEARCHING AND SORTING PURPOSE */
/* Standard Binary Search function*/
int binarySearch(string arr[], int low, 
                    int high, string x) 
{ 
    if(high >= low) 
    { 
        int mid = (low + high)/2; /*low + (high - low)/2;*/
        /* Check if arr[mid] is the first occurrence of x. 
        arr[mid] is first occurrence if x is one of the following 
        is true: 
        (i) mid == 0 and arr[mid] == x 
        (ii) arr[mid-1] < x and arr[mid] == x    */
        if(( mid == 0 || x > arr[mid-1]) && (arr[mid] == x)) 
            return mid; 
        else if(x > arr[mid]) 
            return binarySearch(arr, (mid + 1), high, x); 
        else
            return binarySearch(arr, low, (mid -1), x); 
    } 
    return -1; 
}  
void exchange(string *a, string *b) 
{ 
    string temp = *a; 
    *a = *b; 
    *b = temp; 
} 
int partition(string A[], int start, int end) 
{ 
    string x = A[end]; 
    int i = (start - 1); 
    for (int j = start; j <= end - 1; j++) 
    { 
        if(A[j] <= x) 
        { 
            i++; 
            exchange(&A[i], &A[j]); 
        } 
    } 
    exchange (&A[i + 1], &A[end]); 
    return (i + 1); 
} 
/* Implementation of Quick Sort 
A[] --> Array to be sorted 
si --> Starting index 
ei --> Ending index 
*/
void quickSort(string A[], int start, int end) 
{ 
    int pi; /* Partitioning index */
    if(start < end) 
    { 
        pi = partition(A, start, end); 
        quickSort(A, start, pi - 1); 
        quickSort(A, pi + 1, end); 
    } 
} 
int main() {
	cout<<endl<<"\t* * * * * WELCOME TO LEET CODE * * * * *"<<endl<<endl;
	cout<<endl<<"\t   * * * * * ARRAY ROTATION * * * * *"<<endl<<endl;
	int size=100;
	string Arr1[size];
	string Arr2[size];
	cout<<"\tPlease Enter the Size of the Array= "<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<endl<<"Enter the Values in 1st Array= "<<endl;
	cin>>Arr1[i];
	}
	for(int j=0;j<size;j++)
	{
		cout<<endl<<"Enter the Values in 2nd Array= "<<endl;
		cin>>Arr2[j];
	}
	display(Arr1,Arr2,size);
	equality(Arr1,Arr2,size);
	left_rotate(Arr1,2,size);
	display(Arr1,Arr2,size);
	equality(Arr1,Arr2,size);
    concatenated_array(Arr1,size);
    if(isSubset(Arr1, Arr2, size, size)) 
        cout << endl<<"arr2[] is subset of arr1[] "; 
    else
        cout << endl<<"arr2[] is not a subset of arr1[] ";  
    return 0; 
}

