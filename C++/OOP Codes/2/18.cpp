#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class DateOfJoining{
	int day,month,year;
	public:
		DateOfJoining()
		{
			day=month=year=0;
		}
		DateOfJoining(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		void set_joining()
		{
			cout<<"Day= "<<endl;
			cin>>day;
			cout<<"Month= "<<endl;
			cin>>month;
			cout<<"Year= "<<endl;
			cin>>year;
		}
		
		void get_joining()
		{
			cout<<"Date Of Joining= "<<day<<"/"<<month<<"/"<<year<<endl;
		}
		
};
class Employee
{
	int age;
	string name;
	string ID;
	DateOfJoining Date;
	public:
		Employee()
		{
			DateOfJoining();
			name='\0';
			ID='\0';
			age=0;
		}
		Employee(DateOfJoining d2,string i,string m,int a){
			age=a;
			name=m;
			ID=i;
			Date=d2;
		}
		void set_employee()
		{
			cout<<"Enter Name= "<<endl;
			cin>>name;
			cout<<"Enter Age= "<<endl;
			cin>>age;
			Date.set_joining();
			cout<<"Enter ID= "<<endl;
			cin>>ID; 
		}
		void get_employee()
		{
			cout<<"Entered Value......."<<endl<<endl<<endl;
			cout<<"Name Of Employee= "<<name<<endl;
			cout<<"Age Of Employee= "<<age<<endl;
			Date.get_joining();
			cout<<"Identity Of Employee= "<<ID<<endl;
			cout<<endl<<endl;
		}
};
int main() {
			cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check the Data Of Employees......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
	
	Employee e;
	e.set_employee();
	e.get_employee();
	DateOfJoining d9(12,12,18);
	Employee e2(d9,"30","Bilal",19);
	e2.get_employee();
	return 0;
}
