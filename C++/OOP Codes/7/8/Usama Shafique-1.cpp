#include <iostream>
#include <string>
using namespace std;
class zoo
{
	protected:
		
	string name;
	int age;
	public:
		zoo()
		{
		name='\0';
		age=0;
			
		}
		zoo(string n,int a)
	{
		name=n;
		age=a;
		}
		void set_values()
		{
			cout<<"Please Enter name:";
			cin>>name;
			cout<<"Please Enter age:";
			cin>>age;
		}
	};
	class bird:public zoo
	{
		public:
		bird():zoo()
		{
		name='\0';
		age=0;
		}
		bird(string nn,int aa):zoo(nn,aa)
		{
		name=nn;
		age=aa;
					
				}
	void show_bird()
	{
	cout<<"bird name:"<<name<<endl<<"bird age:"<<age<<endl;
	}
	void fly()
	{
		cout<<"All Birds can Fly ";
	}
};
class animal:public zoo
{
	public:
	animal():zoo()
	{
	name='\0';
	age=0;}
	animal(string nnn,int aaa):zoo(nnn,aaa)
	{
	name=nnn;
	age=aaa;
				}
void show_animal()
{
cout<<"animal name:"<<name<<endl<<"animal age:"<<age<<endl;
}
	
};

int main()
 {
 	bird b1("P",3) ;
 	b1.show_bird();
 	b1.set_values();
 	b1.show_bird();
 	
 	animal a1("C",5);
 	a1.show_animal();
 	a1.set_values();
 	a1.show_animal();
 	b1.fly();
	return 0;
}
