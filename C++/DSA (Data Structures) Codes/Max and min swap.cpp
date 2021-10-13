#include <iostream>
using namespace std;
int main()
{
	int max,min,m,l;
	int arr[9];
	
	for(int j=0;j<9;j++)
	{
		cin>>arr[j];
		cout<<endl;
	
	}
		max=arr[0];
	   min=arr[0];
	for(int i=0;i<9;i++)
	{
	if (max < arr[i+1])
	{
		max=arr[i+1];
		l=i+1;
	}
	 if(min>arr[i])
	{
		min=arr[i];
	    m=i;
	}
}
cout<<"Maximum number is:"<<max<<endl<<l<<endl;
cout<<"Minimum number is:"<<min<<endl<<m<<endl;
cout<<endl<<"After Swapping the Numbers"<<endl;
cout<<endl<<"And the max number is = "<<min<<endl;
cout<<endl<<"And the min number is= "<<max<<endl;
}
