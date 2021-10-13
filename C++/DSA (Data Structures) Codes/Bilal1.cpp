#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int count=0,N=7;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<i;j++)
		{
			count++;
		}
	}
	cout<<"count= "<<count<<endl;
	return 0;
}
