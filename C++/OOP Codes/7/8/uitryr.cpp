#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class mobile
{
	private:
		string name;
		int calls,messages;
		
	public:
	setname(string n)
	{
		name=n;
		}	
		showname()
		{
			cout<<name<<endl;
		}
		setcalls(int c)
		{
			calls=c;
		}
		showcalls()
		{
			cout<<calls<<endl;
		}
		setmessages(int m)
		{
			messages=m;
		}
		showmessaages()
		{
			cout<<messages<<endl;
		}
		
}

int main() {
	mobile m1;
	m1.showname(1);
	m1.showcalls(1);
	m1.showmessages(1);
	return 0;
}
