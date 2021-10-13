#include <iostream>
#include <string>
using namespace std;
class student
{
	protected:
		
string name;
string id;
public:
	student()
	{
		id=name='\0';
		
	}
	student(string n,string i)
	{
		name=n;
		id=i;
	}
	void setdata()
	{
		cout<<"Enter name: "<<endl;
		cin>>name;
		cout<<"enter id: "<<endl;
		cin>>id;
	}
	void disdata()
	{
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
	}
	
};
class marks:public student
{
	protected:
		int student_1,student_2,student_3;
		public:
	marks():student()
	{
		student_1=0;
		student_2=0;
		student_3=0;
	}
	marks(int st1,int st2,int st3):student()
	{
		student_1=st1;
		student_2=st2;
		student_3=st3;
	}
	void displaymarks()
	{
		cout<<"1st stu: "<<student_1<<endl;
		cout<<"2nd stu: "<<student_2<<endl;
		cout<<"3rd stu: "<<student_3<<endl;
	}
	void setmarks()
	{
		cout<<"student 1 marks: "<<endl; 
		cin>>student_1;
		cout<<"student 2 marks: "<<endl;
		cin>>student_2;
		cout<<"student 3 marks: "<<endl;
		cin>>student_3;
	}
	
};
class sport_marks
{ protected:
	int dec_sm;
	public:
	
		sport_marks()
		{
				dec_sm=0;
			
		}
		sport_marks(int o)
		{
		dec_sm=o;
			
		}
		void display()
	{
		cout<<"sport marks: "<<dec_sm<<endl;
	}
		void setdata_sp()
	{
		cout<<"enter sports marks: "<<endl;
		cin>>dec_sm;
	}
};
class result:public marks,public sport_marks
{
	protected:
	int  total;
	float avg;
	string grade;
	public:
		result():marks(),sport_marks()
		{
			total=0;
			grade='\0';
			avg=0;
		}
		result(int t,float a,string g):marks(),sport_marks()
		{
			total=t;
			avg=a;
			grade=g;
		}	
		void setresult()
		{
			cout<<"enter grade: " ;
			cin>>grade;
		}
		void printresult()
		{
			total=student_1+student_2+student_3+dec_sm;
			avg=total/4;

cout<<"total: "<<total<<endl;
cout<<"average: "<<avg<<endl;
cout<<"grade: "<<grade<<endl;			
		}
};


int main() {
	result x;
	x.setdata();
	x.setmarks();
	x.setdata_sp();
	x.setresult();
	x.disdata();
	x.displaymarks();
	x.display();
	x.printresult();
	return 0;
}
