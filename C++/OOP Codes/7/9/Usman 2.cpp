#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int natural(int n)
	{
		if (n==1)
		{
			return 1;
			
		}
		else if (n>1)
		{
			cout<<pow(n,2)<<" ";
		
		return natural(n-1);
		
		}
		else
		cout<<"invalid input"<<endl;;
		
	}
int main() {
	int a=5;
	cout<<natural(a);

	return 0;
}

