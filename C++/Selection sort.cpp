#include <iostream> 
using namespace std; 
  
void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  
  
void selection_Sort(int arr[], int n)  
{  
    int i, j, min_index;  
  
    for (i = 0; i < n-1; i++)  
    {  
          
        min_index = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_index])  
            min_index = j;  
    
        swap(&arr[min_index], &arr[i]);  
    }  
}  
  
void print(int arr[], int N)  
{  
    for (int i=0; i < N; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
   
int main()  
{  
    int n;  
    
    cout<<endl<<"WELCOME, Please Enter the size of the Array= \n"<<endl;
    cin>>n;
    
    int arr[n];
    
    cout<<endl<<"Now, Please Enter the numbers in the Array= \n"<<endl;
    for (int i=0; i<n; i++)
    {
    	cin>>arr[i];
	}
    
    
	selection_Sort(arr,n);  
    cout<<endl<<"Hey, The Selection Sort array for the given numbers is= \n"<<endl;  
    print(arr,n);  
    
	return 0;  
}  
 
