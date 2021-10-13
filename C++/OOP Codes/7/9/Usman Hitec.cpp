#include <iostream>
#include <string>
using namespace std;
class animal
{
	protected:
		string name;
		public:
			animal(string a)
			{
				name=a;
			}
			virtual void sound()=0; 
};
class cat:public animal
{

	public:
		cat(string b):animal(b)
		{
			name=b;
		}
		void sound ()
		{
			cout<<"Growls is said by = "<<name<<endl;
		}
	
		
};
class dog:public animal
{
	public:
		dog(string d):animal(d)
		{
			name=d;
		}
		void sound ()
		
		{
			cout<<"Huff is said by = "<<name<<endl;
		}
		
		
};

int main()
{
	animal *u;
	cat u1("cat");
	dog u2("dog");
	u=&u1;
	u->sound();
	u=&u2;
	u->sound();
}
