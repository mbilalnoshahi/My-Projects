#include <iostream>
#include <string.h>
using namespace std;

string name[30],ID[30], blood_group[30],address[30];
int num_of_patients;
void set_info()
{
	cout<<endl<<"\t******WELCOME to INFO Centre******"<<endl;
	cout<<endl<<"\t******Please Enter the information of Patients******"<<endl;
	cout<<endl<<"Please Enter the number is patients= "<<endl;
	cin>>num_of_patients;
	
	for (int i=1; i<=num_of_patients; i++)
	{
		cout<<endl<<"Please Enter the ID of Patient: "<<i<<endl;
		cin>>ID[i];
		cout<<endl<<"Now Please Enter Patient Name= "<<endl;
		cin>>name[i];
		
		cout<<endl<<"Plaese Enter Blood_Group= "<<endl;
		cin>>blood_group[i];
		
		cout<<endl<<"Please Enter Address of Patient= "<<endl;
		cin>>address[i];		
	
	 } 
	 
}
	 
	 
void get_info()
{
	cout<<endl<<"\t**** Following is the information of the patients saved in the database **** "<<endl;
	
	for(int i=1; i<=num_of_patients; i++)
	{
		
		cout<<endl<<"ID of Patient is: "<<ID[i]<<endl;
		
		cout<<endl<<"Patient Name= "<<name[i]<<endl;

		cout<<endl<<"Plaese Enter Blood_Group= "<<blood_group[i]<<endl;
		
		cout<<endl<<"Address of Patient is= "<<address[i]<<endl;
		
		}	

}


void login()
{
	string user,pass;
	cout<<endl<<"WELCOME here, First Please Enter the Username and Password to login..."<<endl;
	cout<<endl<<"Please Enter the Username= "<<endl;
	cin>>user;
	cout<<"Now, Please Enter the Password= "<<endl;
	cin>>pass;
	
	if (user=="bilal" && pass=="noshahi")
	{
		cout<<endl<<"\tSuccessfully Logged in..."<<endl;
	}

	else 
		cout<<endl<<"\tLogged in Failed, Please Enter the Correct Username or Password.."<<endl;
}

int main()
{
	cout<<endl<<"\t******WELCOME to MAIN Program******"<<endl;
	cout<<endl<<"1- SET INFO "<<endl;
	cout<<endl<<"2- GET INFO "<<endl;
	cout<<endl<<"0- EXIT "<<endl;
	
	login();
	set_info();
	get_info();
	
}

