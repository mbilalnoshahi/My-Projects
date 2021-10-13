#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Bilal{
	int x,y;
	public:
		Bilal()
		{
			x=0;
			y=0;
		}
		Bilal(int s,int d)
		{
			x=s;
			y=d;
		}
		void display()
		{
		
		try
		{
			if(y!=0)
			{
				cout<<"Division: "<<x/y<<endl;
			}
			else
			throw y;
		}
		catch (int r)
		{
			cout<<"Exception"<<endl;
		}
	}
};
int main() {
	Bilal b1(4,2);
	b1.display();
	return 0;
}
