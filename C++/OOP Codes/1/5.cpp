#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void num()
{
    char d;
    int c = 0;
    int n;
	char a [100] = "HafizFartash";
	
	cin >> d;
	for ( n=0; n < 100; ++n )
	{
		if ( a [n] == d )
		{
			++c;
			cout << a [n] << n << endl;
			break;
		}
}
if ( c == 0 )

{

	cout << "Not Found";
}
}



int main() {
	cout << "plz Enter the word : " << endl;

   num();
}

