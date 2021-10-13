#include <iostream>
#include <string.h>
using namespace std;
void B(string username ,string password)
{
	if(username=="abcd"&&password=="pakistan")
	{
		cout<<"Login Successfully...."<<endl;
	}
	else
	
		cout<<"Login Failed..."<<endl;	
}
int main() {	
   string username,password;
   cout<<"Welcome To C++...."<<endl;
   cout<<"Please Enter the Username="<<endl;
   cin>>username;
   cout<<"Now Enter Your Password="<<endl;
   cin>>password;
   B(username,password);
}
