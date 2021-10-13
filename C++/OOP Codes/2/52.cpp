#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Bilal{
	public:
	~Bilal()
	{
	}
};
class Pakistan:public Bilal

{
	
	};	
	
		void display()
		{
		
		try{
			throw Pakistan();
		}
		catch (Pakistan & P)
		{
			cout<<"Bilal...."<<endl;
			throw;
		}
      
}
int main() {
	try
	{
		display();
	}
	
	catch(Bilal & b)
	{
		cout<<"From Pakistan..."<<endl;
	 } 
	return 0;
}
