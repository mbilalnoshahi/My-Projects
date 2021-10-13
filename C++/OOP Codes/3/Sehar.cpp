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
name="null";
id="null";
}
student(string n,string i)
{
name=n;
id=i;
}
void set_value()
{
cout<<"enter the name of the student:"<<endl;
cin>>name;
cout<<"enter the id of the student:"<<endl;
cin>>id;
}
};
class marks:public student
{
protected:
int student1;
int student2;
int student3;
public:
marks():student()
{
 student1=0;
 student2=0;
 student3=0;
}
marks(int s_1,int s_2,int s_3):student()
{
 student1=s_1;
 student2=s_2;
 student3=s_3;
}
void set_value1()
{
cout<<"enter the marks of the student 1:"<<endl;
cin>>student1;
cout<<"enter the marks of the student 2:"<<endl;
cin>>student2;
cout<<"enter the marks of the student 3:"<<endl;
cin>>student3;
}
};
class sport
{
protected:
int sport_marks;
public:
sport()
{
sport_marks=0;	
}
sport(int s_m)
{
sport_marks=s_m;	
}
void set_value2()
{
cout<<"enter the sports marks:"<<endl;
cin>>sport_marks;
}
void display()
{
cout<<"enter the sports marks"<<sport_marks<<endl;
}
};
class result:public sport,public marks
{
private:
int total;
float average;
char grade;
public:
result ():sport(),marks()
{
total=0;
average=0.0;
grade='n';
}
result(int t,float a,char g):sport(),marks()
{
total=t;
average=a;
grade=g;
}
void func()
{
	total=student1 + student2 + student3 + sport_marks;
	average=total/4;
}
void set_value()
{
set_value1();
set_value2();	
}
void set_grade()
{
	cout<<"Enter Grade: ";
	cin>>grade;
}
void display()
{
func();	
cout<<"Total: "<<total<<endl;
cout<<"Average: "<<average<<endl;
cout<<"Grade: "<<grade<<endl;
}
};
int main()
{
result r;
r.set_value();
r.set_grade();
r.display();
}
