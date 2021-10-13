#include <iostream>
using namespace std;
class animal
{
	protected:
		string name;
		public:
			
			void set_value ()
			{
				cout<<"enter the animal name:"<<endl;
				cin>>name;
			}
			virtual void sound()=0; 
};
void animal::sound()
{
	cout<<"name is:"<<name;
}
class cat:public animal
{
	private:
		string cat_name;

	public:
		void sound ()
		{
			cout<<cat_name;
		}
	
		
};
class dog:public animal
{
	private:
		string dog_name;

	public:
		void sound ()
		
		{
			cout<<dog_name;
		}
		
		
};

int main()
{
	animal *a2;
	cat c;
	dog d;
	a2=&c;
	a2->set_value();
	a2->sound();
	a2=&d;
	a2->set_value();
	a2->sound();
}
