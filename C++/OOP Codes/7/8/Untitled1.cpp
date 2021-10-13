#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class group{
	private:int group_num;
	public:
		group()
		{
			group_num = 0;
		}
		group ( int no )
		{
			group_num=no;
		}
		void set_grp()
		{
			cout << "NumberOfGroups: " << endl;
			cin >> group_num;
		}
		
		void get_grp()
		{
			cout << group_num << endl;
		}
		
};
class student
{
	private:int age;
	string name,id;
	group grp;
	public:
		student()
		{
			age = 0;
			name = '\0';
			id = '\0';
			
			group();
		}
		student ( group gp,string i,string n,int a )
		{
			age=a;
			name=n;
			id=i;
			grp=gp;
		}
		void set_student()
		{
			cout << "Please Enter Student Name: " << endl;
			cin >> name;
			cout << "Please Enter Student Age: " << endl;
			cin >> age;
			grp.set_grp();
			cout << "Please Enter Student ID: " << endl;
			cin >> id; 
		}
		void get_student()
		{
			cout << name << endl;
			cout << age << endl;
			grp.get_grp();
			cout << id << endl;
		}
};
int main() {
	
	student s1;
	s1.set_student();
	s1.get_student();
	group g1(87);
	student s2(g1,"Rehman","900",345);
	s2.get_student();
	return 0;
}
