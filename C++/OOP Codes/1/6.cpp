#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun ( int a[5] )
{
	
	for( int n = 0; n < 5; ++n )
	cout << ( * ( a + n ) + 10 );
	
}
int main() {
	int a[5];
	cout << " Please enter Value: " << endl;
	for( int n = 0; n < 5; ++n )
	cin >> *(a+n);	
	fun ( a);
	return 0;
}
