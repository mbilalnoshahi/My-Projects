#include <iostream>
#include <string.h>
using namespace std;
void Length(char x[30])
{
	int i=0;
	char *y;
	y=x ;
	while(*y!='\0')
	{
	y++;

			i++;
		}
		cout<<i;
	
	}


int main() 

{
char b[30];

cin.get(b,30);
Length(b);	
}

