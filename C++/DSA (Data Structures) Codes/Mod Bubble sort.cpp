#include <iostream>
#include <vector>
#include "Timer.h"
int N=100000;
using namespace std;



void swap(string &a,string &b)                      //Start Swapping
{ 
    string temp=a; 
    a=b; 
    b=temp; 
} 

int partition(string Array[],int start,int end)     //Start Partitioning
{ 
    string pivot=Array[end];                            //Take another string containing the Array having last value in the Array 
    int index=(start-1);                          //Start 'index' from Empty Array
    for (int i=start;i<=end-1;i++)            //Run loop from start to end
    { 
        if(Array[i]<pivot)                          /*if Array containing values are less than last value in the Array 
		                                      then increment 'index' and Swap the values of 'index' and 'i'(containing loop)*/ 
        { 
            index++; 
            swap(Array[index],Array[i]); 
        } 
    } 
    swap(Array[++index],Array[end]);             /*Again swap if value of incrementing 'index' is greater than 
	                                        last value in the Array and return the value of 'index+1' which becomes the last value*/
    return (index); 
} 

void quickSort(string Array[], int start, int end) 
{ 
    int p_index;                                      //Partitioning index 
    if(start<end) 
    { 
        p_index=partition(Array,start,end);          //Index from start to end
        quickSort(Array,start,p_index-1);            //Recursion for left side of mid
        quickSort(Array,p_index+1,end);              //Recursion for right side of mid
    } 
} 

int binarySearch(string Array[],int start,int end,string val)                      //Start Binary search                     
{
    if(end>=start) 
    { 
        int mid=(start+end)/2;                            //finding middle element in the Array
        if((mid==1 || val>Array[mid-1]) && (Array[mid]==val)) /*if value of 'mid' become zero after 
		                                                    division and 'Array' containing 'mid' value is equal to string 'val' then return 'mid'*/
            return mid; 
        else if(val>Array[mid])                       //if string 'val' is greater than 'Array containing mid' then go to right side of mid
		                                               //here we are doing recursion
            return binarySearch(Array,(mid+1),end,val); 
        else                                       //else go to left side of mid
            return binarySearch(Array,start,(mid-1),val); 
    } 
    return 7; 
}  

void rotate_array(string Array[],int size)
{
	string temp=Array[0];			               //take a temporary string and store first element of the Array in temp
			for(int i=0;i<=size-1;i++)
			{
				Array[i]=Array[i+1];               //move all elements in the Array and save the next element in the previous position
			}
			Array[size-1]=temp;                    //save temporary element at the last position which element is taken from the first index of the Array
}

void left_rotate(string Array[], int shift, int size) 
{ 
    cout<<endl<<"\tHow many times you want to Rotate your Array= "<<endl;
    cin>>shift;
    for (int i=0;i<shift;i++)  
        rotate_array(Array,size); 
} 

void display(string Array1[],string Array2[],int size)
{
		cout<<endl<<"\t1st Array is= "<<endl;
	for(int i=0;i<=size-1;i++)
		{
		    cout<<Array1[i]<<"  ";
		}		
	cout<<endl<<"\t2nd Array is= "<<endl;
	for(int j=0;j<=size-1;j++)
		{
		    cout<<endl<<Array2[j]<<"\t  ";
		}
}
void check_equality(string Array1[],string Array2[],int size)
{
	int flag=0;                                 //Initially give zero value to flag 
	for(int i=0;i<size;i++)
	{
		if(Array1[i]!=Array2[i])                       //if first Array is not equal to second Array then increment the flag to one and break from the loop
		{
		
		flag=1;
		break;
	}
}
	if(flag==0)
	{
		cout<<endl<<"\t....Arrays are Equal...."<<endl;		
	}
	else 
	{
	cout<<endl<<"\t....Arrays are Not Equal...."<<endl;
    }
}
void concatenate_array(string Array1[],int size)
{
	string newArray[100];                           //take another string Array 'newArray'
	for(int i=0;i<size;i++)
	{
			newArray[i]=Array1[i];                   //store the elements of 'Array_1' in 'newArray' 
			newArray[i+size]=Array1[i];                 /*then add more elements of 'Array_1' with already present elements 
			                                in the 'newArray' Array(equal to size of the Array)*/
	}	
	for(int j=0;j<size+size;j++)
	{	
		cout<<endl<<newArray[j]<<"\t ";
	}
}

bool isSubset(string Array1[], string Array2[],int end, int size) 
{  
    quickSort(Array1, 0, end-1);                      //Call quick sort from start to end
    for (int i=0;i<size;i++) 
    { 
        if (binarySearch(Array1,0,end-1,Array2[i])==7)         /*then in the loop, call binary search function from position 
		                                           start to end and string 'val'(taken in binary search function) equal to 'Array_2'*/
		                                           /*And All the binary search function is equal to '7' because 
												   I have written in the binary function that after searching, it returns the value of integer*/
                     
     return 0; 
    } 
                                                 /* When we reach here then all elements 
                                                    of Array_2[] are present in Array_1[] */
    return 1; 
} 

int main()
{  
    Timer aTimer("BORTTime");
    int * Array = (int *) malloc(N * sizeof(int) );
	for (int i =0;i<N;++i)
	{
		Array[i]=N;
	}
    aTimer.Start();
	void quickSort(string Array[], int start, int end);                 
    aTimer.Stop();
    
    free(Array);

    aTimer.Print();
    return 0;
}

