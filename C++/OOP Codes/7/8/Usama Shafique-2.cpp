#include<iostream>
#include<string>
using namespace std;
class person
{
	protected:
	string name;
	int age;
	public:
	
		person()
		{
			name='\0';
			age=0;
		}
		person(string n,int a)
		{
			name=n;
			age=a;
			
		}
		void set_values()
		{
			cout<<"enter the name:";
			cin>>name;
			cout<<"enter age:";
			cin>>age;
			 
		}
		};
			class student:public person
			{
				
					
				public:
				student():person()
				{
					name='\0';
					age=0;
					
				}
				student(string n1,int a1):person( n1, a1)
				{
					name=n1;
					age=a1;
					
				}
				void show_values()
				{
				cout<<"student name:"<<name;
				cout<<"student age:"<<age;
				}
			};
		class teacher:public person
		{
			public:
				teacher():person()
				{
					name='\0';
					age=0;
				}
			teacher(string n2,int a2):person( n2, a2)
			{
				name=n2;
				age=a2;
			}
			void show_values()
			{
				cout<<"teacher name:"<<name;
				cout<<"teacher age:"<<age;
			}
		};
	int main()
	{
		student s1(" sn ",4);
		s1.show_values();
		s1.set_values();
		s1.show_values();
		teacher t1(" t ",3);
		t1.show_values();
		t1.set_values();
		t1.show_values();
	
return 0;
}
