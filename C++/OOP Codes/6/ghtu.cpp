#include <iostream>
#include <string.h>

int main()
{
	int inc = 0;
	char c;
	char a [9]="Pakistan";
	cin>>c;
	
	for(int i=0;i<9;i++)
	{
		if (a[i]==c)
		{
			inc++;
			cout<<a[i]<<" : Position "<<i<<end1;
		}
	
}
if (inc==0)

{
	
	cout<<"Not Found";
}

	return 0;
}
