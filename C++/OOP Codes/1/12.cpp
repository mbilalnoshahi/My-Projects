#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int age;
	string name,reg;
	public:
		student()
		{
			cout<<"Enter Student name= "<<endl;
			cin>>name;
				cout<<endl;
			cout<<"Enter Age= "<<endl;
			
			cin>>age;
				cout<<endl;
			cout<<"Enter Registration Number= "<<endl;
			cin>>reg;
				cout<<endl;
		}
		student (int,string,string);
		void display();
	
		
};
student::student(int a,string b,string c)
		{
			name=b;
			age=a;
			reg=c;
		}
	void student:: display()
		{
			cout<<name<<endl;
			cout<<age<<endl;
			cout<<reg<<endl;
			cout<<endl;
		}
int main()
{
	cout<<"Welcome by Bilal in C++ Programming......"<<endl;
	cout<<endl;
	cout<<"Here You Can Enter the record of Student....."<<endl;
	cout<<endl;
	cout<<"So don't waste your time and move forward....."<<endl;
    cout<<endl;
student s1;
student s2(18,"Bilal","17-CE-030 \n");
s1.display();
s2.display();
student s3;
s3.display();
cout<<"Thanks for Coming here...."<<endl;
return 0;

}

