#include<iostream>
using namespace std;
int selectionsort(int *,int);
int selectionsort(int *arr,int n)
{
    int i,j,temp;
for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            if(*(arr+i)>*(arr+j))
            {
                temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
        }
    return 0;
}
 
int main()
{
    int *arr,n,i;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
    arr=(int *)(n*sizeof(int));
    cout<<"Enter elements: "<<endl ;
    for(i=0;i<n;i++)
    {
	
    cin>>arr+i;
}
    selectionsort(arr,n);
    cout<<"Sorted elements are";
    for(i=0;i<n;i++)
    cout<<(arr+i)<<" ";
return 0;
}

