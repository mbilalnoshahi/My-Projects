#include <iostream>
#include <string.h>
using namespace std;

string name[30],ID[30], blood_group[30],address[30], phone_no[30];
int num_of_patients;
char c;
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
		
		cout<<endl<<"Please Enter Phone Number of Patient= "<<endl;
		cin>>phone_no[i];		
		
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
		
		cout<<endl<<"Phone Number of Patient is= "<<phone_no[i]<<endl;
		
		cout<<endl<<"Address of Patient is= "<<address[i]<<endl;
		
		}	

}


bool login()
{
	string user,pass;
	char t;
	cout<<endl<<"WELCOME here, First Please Enter the Username and Password to login..."<<endl;
	cout<<endl<<"Please Enter the Username= "<<endl;
	cin>>user;
	cout<<"Now, Please Enter the Password= "<<endl;
	cin>>pass;
	
	if (user=="bilal" && pass=="noshahi")
	{
		cout<<endl<<"\tSuccessfully Logged in..."<<endl;
		return true;
	}

	else if (user!="bilal" && pass!="noshahi")
	{  
		cout<<endl<<"\tLogged in Failed, Please Enter the Correct Username or Password.."<<endl;		
		return false;
	}
}

int main()
{
	int sw,y;
	string user,pass;
	cout<<endl<<"\t******WELCOME to MAIN Program******"<<endl;
	
	cout<<endl<<"0- EXIT "<<endl;
	cout<<endl<<"1- SET INFO "<<endl;
	cout<<endl<<"2- GET INFO "<<endl;
	cout<<endl<<"Any other number- EXIT "<<endl;
	
	cin>>sw;
	
	switch(sw)
	{
		case 1:
			
			login();
			set_info();
			
			cout<<endl<<"Do you want to Display now? "<<endl;
			cout<<endl<<"Please Enter '1' for yes, otherwise No!!!"<<endl;
			cin>>y;
			
			if (y==1)
			{
				get_info();
			}
			
			else
			{
				break;
			}
			
			break;
			
		case 2:
			
			if (!login())
			{
				get_info();			
				cout<<endl<<"\t Here it is login successful..!! "<<endl;
			}			
				
			break;
			
		default:
			break;
	}
	
}

