#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout<<endl<<"Hi..!! WELCOME to C++ Programming"<<endl;
	cout<<endl<<"Please Enter the value= "<<endl;
	cin>>n;
	for(int a=1;a<=n;a++)
	{
		
		for(int b=1;b<=n;b++)
		{
			if(a==1 || a==n)
			{
				cout<<"*";
			}
			else
			{
				
				if(b==1 || b==n)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}

	
}
	

		


