#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int factorial(int n)
	{
		if (n==1||n==0)
		{
			cout<<1<<"="<<endl;
			return 1;
		}
		else if (n>1)
		{
			cout<<n<<"*";
		
		return n*factorial(n-1);
		}
		
	}
int main() {
	int i=4;
	cout<<factorial(i);

	return 0;
}



