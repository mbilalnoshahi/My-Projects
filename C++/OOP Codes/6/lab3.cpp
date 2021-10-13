#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void add_10(int a[],int n){
	for(int i=0;i<n;i++)
	cout<<*(a+i)+10<<endl;
	
}
int main() {
	int m;
	cin>>m;
	int b[50];
	cout<<"Enter Array= "<<endl;
	for(int i=0;i<m;i++)
	cin>>*(b+i);	
	cout<<endl;
	
	add_10(b,m);
	return 0;
}
