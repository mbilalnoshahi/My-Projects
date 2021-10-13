#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void B()
{
    char c=0;
	char a [9]="Pakistan";
	cin>>c;
	for(int i=0;i<9;i++)
	{
		if (a[i]==c)
		{
			c++;
			cout<<a[i]<<i<<endl;
			break;
		}
}
if (c==0)

{

	cout<<"Not Found";
}
}



int main() {
	cout<<"Welcome Buddy, Thanks for using my program..!!"<<endl;
	cout<<"Here you can check the position of the Word..."<<endl;
	cout<<"Enter the word, for you want to check the position"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;

   B();
}

