#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Group{
	int group_num;
	public:
		Group()
		{
			group_num=0;
		}
		Group(int n)
		{
			group_num=n;
		}
		void set_group()
		{
			cout<<"No. Of Groups= "<<endl;
			cin>>group_num;
		}
		
		void get_group()
		{
			cout<<"Group= "<<group_num<<endl;
		}
		
};
class Student
{
	int age;
	string name;
	string ID;
	Group g;
	public:
		Student()
		{
			Group();
			name='\0';
			ID='\0';
			age=0;
		}
		Student(Group g2,string i,string m,int a){
			age=a;
			name=m;
			ID=i;
			g=g2;
		}
		void set_student()
		{
			cout<<"Enter Name= "<<endl;
			cin>>name;
			cout<<"Enter Age= "<<endl;
			cin>>age;
			g.set_group();
			cout<<"Enter ID= "<<endl;
			cin>>ID; 
			
		}
		void get_student()
		{
			cout<<"Entered Value......."<<endl<<endl<<endl;
			cout<<"Name= "<<name<<endl;
			cout<<"Age= "<<age<<endl;
			g.get_group();
			cout<<"ID= "<<ID<<endl;
			cout<<endl<<endl;
			cout<<endl;
		}
};
int main() {
		cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check full detail of Group and Student......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
	
	Student r;
	r.set_student();
	r.get_student();
	Group g9(87);
	Student s2(g9,"78","Bilal",19);
	s2.get_student();
	return 0;
}
