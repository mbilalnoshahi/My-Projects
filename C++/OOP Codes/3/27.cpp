#include <iostream>
#include <string>
using namespace std;
class S{ //S=STUDENT
protected:
string ID,n; //n=name
public:
S()
{
n='\0';
ID='\0';
}
S(string n1,string i1)
{
n=n1;
ID=i1;
}
void set_S()
{
cout<<"Please Enter Name= "<<endl;
cin>>n;
cout<<"Please Enter ID_No= "<<endl;
cin>>ID;
}
void Display_S()
{
cout<<endl;
cout<<"Name= "<<n<<endl;
cout<<"ID_No= "<<ID<<endl;
cout<<endl;
}		
};
class M:public S //M=MARKS && S=STUDENT
{ 
protected:
int s1,s2,s3;
public:
M():S()
{
s1=0;
s2=0;
s3=0;		
}
M(int s4,int s5,int s6):S()
{
s1=s4;
s2=s5;
s3=s6;
}
void set_M()
{			
set_S();
cout<<"Please Enter Marks Of First Student= "<<endl;
cin>>s1;
cout<<"Please Enter Marks Of Second Student= "<<endl;
cin>>s2;
cout<<"Please Enter Marks Of Third Student= "<<endl;
cin>>s3;
}
void Display_M()		
{
Display_S();
cout<<endl;
cout<<"Marks Of First StudeNt= "<<s1<<endl;
cout<<"Marks Of Second StudeNt= "<<s2<<endl;
cout<<"Marks Of Third StudeNt= "<<s3<<endl;
cout<<endl;
}			
};
class S_M //S_M=SPORT MARKS 
{
protected:
int d_s_m; //d_s_m=Declare Sport Marks	
public:
S_M()
{
d_s_m=0;
}
S_M(int d7)		
{
d_s_m=d7;
}
void set_SM()
{
cout<<"Please Enter Spprt Marks= "<<endl;
cin>>d_s_m;
}
void Display_SM()
{
cout<<"Sport Marks= "<<d_s_m<<endl;
cout<<endl;
}
};
class RESULT:public M,public S_M
{
float t,a; //t=total,a=average
string g; //g=grade	
public:
RESULT():M(),S_M()
{
t=0;
a=0;
g='\0';
}
RESULT(float p1,float p2,string p3):M(),S_M()	
{
t=p1;
a=p2;
g=p3;
		
}
void set_result()
{
set_M();
set_SM();
cout<<"Please Enter the Marks fOr Grade= "<<endl;
cin>>g;
}
void Display_result()
{
Display_M();
Display_SM();
t=s1+s2+s3+d_s_m;
cout<<"Total Marks= "<<t<<endl;
a=t/4;
cout<<"Average= "<<a<<endl;
cout<<"Grade= "<<g<<endl;
}
};
int main() {	
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check the Record Of Marks Of Students......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
RESULT h;
h.set_result();	
h.Display_result();
return 0;
}
