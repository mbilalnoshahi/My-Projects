#include <iostream>
#include <string>
using namespace std;
class P //P=PERSON
{
protected:
int a; //a=age
string n; //n=name
public:
P()
{
a=0;
n='\0';
}
P(int a1,string n1)
{
a=a1;
n=n1;
}
void set_PERSON()
{
cout<<endl;
cout<<"Enter Name Of a Person= "<<endl<<endl;
cin>>n;
cout<<"Enter Age Of a Person= "<<endl<<endl;
cin>>a;	
}
};
class S:public P //S=STUDENT && P=PERSON
{
int fee,a_h; //a_h=ATTENDENCE_HOURS
string c_n; //c_n=CLASS_NAME
public:
S():P()
{
a_h=0;
c_n='\0';	
a=0;
n='\0';
fee=0;
}
S(int a2,string n2,int f2,int k,string j):P(a2,n2)
{
a_h=k;
c_n=j;	
a=a2;
n=n2;
fee=f2;
}
void set_STUDENT()
{
cout<<endl;
cout<<"Enter Fee Of a Student= "<<endl;
cin>>fee;
cout<<"Enter Attendence hours Of a Student= "<<endl;
cin>>a_h;
cout<<"Enter Class Name of a Student= "<<endl;
cin>>c_n;
}
void Display_STUDENT()
{
cout<<endl;
cout<<"Student Name= "<<n<<endl<<endl;;
cout<<"Student Age= "<<a<<endl<<endl;
cout<<"Student Fee= "<<fee<<endl<<endl;
cout<<"Student Attendence hours= "<<a_h<<endl<<endl;
cout<<"Student Class Name= "<<c_n<<endl<<endl;
}
};
class T:public P //T=TEACHER && P=PERSON
{
int s; //s=salary
string ID_NO;
public:
T():P()
{
ID_NO='\0';	
a=0;
n='\0';
s=0;
}
T(int a3,string n3,int s3,string i):P(a3,n3)
{
ID_NO=i;	
a=a3;
n=n3;
s=s3;
}
void set_TEACHER()
{
cout<<endl;
cout<<"Enter ID Number Of a Teacher= "<<endl<<endl;
cin>>ID_NO;
}
void DISPLAY_TEACHER()
{
cout<<endl;
cout<<"Teacher Name= "<<n<<endl<<endl;
cout<<"Teacher Age= "<<a<<endl<<endl;
cout<<"Teacher Salary= "<<s<<endl<<endl;
cout<<"Teacher ID Number= "<<ID_NO<<endl<<endl;
}
};
int main() {
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check the Record Of Students and Teachers......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
S y(18,"Bilal",7000,9,"4th Year");
y.Display_STUDENT();
y.set_PERSON();
y.set_STUDENT();
y.Display_STUDENT();
T w(29,"Kashif",90000,"AIFJS97e87836Y90");
w.DISPLAY_TEACHER();
w.set_PERSON();
w.set_TEACHER();
w.DISPLAY_TEACHER();
return 0;
}
