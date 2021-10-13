#include <iostream>
#include <string>
using namespace std;
class cellphone
{
	
protected:
string m_number,s_size,cam;
public:
  cellphone()
{
	
s_size='\0';
cam='\0';
m_number='\0';
}
cellphone(string x,float y,float z)

{
	
  s_size=y;
  cam=z;
 m_number=x;
 }
void setphone()
{
cout<<"write model no of cell phone: ";
cin>>m_number;
cout<<"enter screen size of cell phone: ";
cin>>s_size;
cout<<"mention camera of cell phone: ";
cin>>cam;

}

void make_call(int m)
{
	

cout<<"dial phone number: ";
cin>>m;

}
void send_sms(int x2,string y2)
{
	
   cout<<"enter number: ";
cin>>x2;
cout<<"type a msg: ";
cin>>y2;
}
void display_information()
{
	
cout<<"model number: "<<m_number;
cout<<"screen size of your phone: "<<s_size;
cout<<"Camera: "<<cam;

}

};
class nokia:public cellphone
{
private:	
string mms,RAM,ROM;
public:
nokia():cellphone()
{
  mms='\0';
  RAM='\0';
  ROM='\0';
}
	
nokia(string a,string b,string c,string x3,string y3,string z3):cellphone(x3,y3,z3)
{
	
mms=a;
RAM=b;
ROM=c;
model_number=x3;
screen_size=y3;
camera=z3;

}	
void setnokia()
{
setphone();
cin>>mms;
if(mms=="true")
{
cout<<"have mms,move next** ";
}
else if(mms=="false")
{
			cout<<"sorry,don't have mms** ";
		}
else
{
 cout<<"invalid statement ";
}
cout<<"Enter RAM of mobile: ";
cin>>RAM;

cout<<"Enter ROM of mobile: ";
cin>>ROM;
}
void displaynokia()
{

   display_information();

cout<<"mms: "<<mms;

  cout<<"RAM: "<<RAM;

  cout<<"ROM: "<<ROM;
}
};
int main() {
nokia n1("1280","3 inches","no","no","no","no");
n1.displaynokia();
n1.setnokia();
n1.displaynokia();
return 0;
}
