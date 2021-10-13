#include<iostream>
using namespace std;
template<class t>
void search(t array[10],t element)
{
	for(int i=0;i<10;i++)
	{
		if(element==array[i])
		{
			cout<<"element found on index:"<<i;
		}
	}
}

int main()
{
	cout<<"/////////**INT ARRAY**//////////\n";
	int arr[10];
	int b;
		cout<<"plz enter int to search in array\n";
		cin>>b;
	for(int i=0;i<10;i++)
	{
		int p;
		p=i;
		arr[i]=p;
	}
	search(arr,7);
	cout<<"\n/////////**FLOAT ARRAY**//////////\n";
	float arra[10];
	float f;
	cout<<"plz enter float to search in array\n";
	cin>>f;
	for(int i=0.0;i<10.0;i++)
	{
		float a;
		a=i;
		arra[i]=a;
	}
	search(arra,f);
	cout<<"\n/////////**CHAR ARRAY**//////////\n";
	char array[10];
	char c;
	cout<<"plz enter char to search in array\n";
	cin>>c;
	cout<<"plz enter char array element:";
	for(int i=0;i<10;i++)
	{
		cin>>array[i];
	}
	search(array,c);
	
}
