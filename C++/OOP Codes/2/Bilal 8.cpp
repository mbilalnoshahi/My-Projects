#include <iostream>
using namespace std;
class animal
{
	protected:
		string name;
		public:
			animal(string n)
			{
				name=n;
			}
			virtual void sound()=0; 
};
class cat:public animal
{

	public:
		cat(string c):animal(c)
		{
			name=c;
		}
		void sound ()
		{
			cout<<"'Meow'' said by: "<<name<<endl;
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
			cout<<"WooF Saying by: "<<name<<endl;
		}
		
		
};

int main()
{
	animal *a2;
	cat c("Cat");
	dog d("Dog");
	a2=&c;
	a2->sound();
	a2=&d;
	a2->sound();
}
