#include <iostream>
#include <string.h>
using namespace std;


int ch;
string name[30],ID[30], writer[30],pages[30], contact[30];
int num;
char c;
void set_info()
{
	cout<<endl<<"\t******WELCOME to BOOKS SHOP******"<<endl;
	cout<<endl<<"\t******Please Enter the Information of BOOKs you want to buy..!!******"<<endl;
	
	cout<<endl<<"Please Enter the number of books= "<<endl;
	cin>>num;
	
	for (int i=1; i<=num; i++)
	{
		cout<<endl<<"Please Enter the ID of the Book"<<i<<" :"<<endl;
		cin>>ID[i];
		cout<<endl<<"Now Please Enter Book"<<i<<" Name= "<<endl;
		cin>>name[i];
		
		
		cout<<endl<<"Now Please Enter the Writer of Book"<<i<<" = "<<endl;
		cin>>writer[i];
		
		cout<<endl<<"Please Enter No. of Pages of Books"<<i<<" = "<<endl;
		cin>>pages[i];		
		
		cout<<endl<<"Please Enter Contact# for Book"<<i<<" = "<<endl;
		cin>>contact[i];		
	
	 } 
	 
}
	 
	 
void get_info()
{
	cout<<endl<<"\t**** Following is the information of the patients saved in the database **** "<<endl;
	
	for(int i=1; i<=num; i++)
	{
		
		cout<<endl<<"ID of Book"<<i<<" is: "<<ID[i]<<endl;
		
		cout<<endl<<"Name of Book"<<i<<" is= "<<name[i]<<endl;

		cout<<endl<<"Writer of Book"<<i<<" is = "<<writer[i]<<endl;
		
		cout<<endl<<"Pages of Book"<<i<<" is= "<<pages[i]<<endl;
		
		cout<<endl<<"Contact for Book"<<i<<" is= "<<contact[i]<<endl;
		
		}	

}


bool login()
{
	string user,pass;
	
	ch=0;
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
			if (true)
			{
			
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

			
			}
		
			
			
			break;
			
		case 2:
			
			if (ch==7)	
			{
				get_info();			
				cout<<endl<<"\t Here it is login successful..!! "<<endl;
			}
			
			else
			{
				break;
						}			
				
			break;
			
		default:
			break;
	}
	
}



