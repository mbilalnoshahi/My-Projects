#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int length ( char a [100] )
{
	
	char *b;
	  b = a;
	int n = 0;
	while ( *b != '\0' )
	{
	++b;

	++n;
	}
	cout << n;
	
	}


int main() 

{
char c [20];


cin . get ( c , 67 );
length ( c );	
return 0;
}

