
#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int natural(int n)
	{
		if (n==0||n==1)
		{
			return n;
		}
		else if (n>1)
		
		{
		
		
		return (natural(n-1)+natural(n-2));
		
		}

		
	}
int main() {
	int a;
	int i;
	cout<<"Enter value: "<<endl;
	cin>>a;
	cout<<"Fibonacci is: "<<endl;
	for(i=0;i<a;i++)
	{
		
			cout<<natural(i)<<"   ";
	}


	return 0;
}

