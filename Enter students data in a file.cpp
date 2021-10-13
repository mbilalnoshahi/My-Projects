#include <iostream>
#include <fstream>

using namespace std;

int main(){
  
  int choice_1,choice_2;
  char name[50];
  char reg_no[50];
  char marks[50];
  char address[100];  
  char phone_number[50];
  char nationality[50];
  char dummy[50];
  int students;
  
  cout<<"Hi! Welcome to C++ Program"<<endl;
  cout<<endl<<"How many student's data you want to enter?"<<endl;
  cin>>students;
  
  for(int i =0; i< students; i++)
  {
  cout<<endl<<"\t......Enter the Data......"<<endl;
  cout<<endl<<"\t......Press any number to continue......"<<endl;  
  cin.getline(dummy,50);
  cout<<endl<<"Please Enter the name of Student= "<<endl;
  cin.getline(name,50);
  cout<<endl<<"Please Enter reg_no of Student= "<<endl;
  cin.getline(reg_no,50);
  cout<<endl<<"Please Enter Student marks= "<<endl;
  cin.getline(marks,50);
  cout<<endl<<"Please Enter Student address= "<<endl;
  cin.getline(address,100);
  cout<<endl<<"Please Enter Student Contact= "<<endl;
  cin.getline(phone_number,50);
  cout<<endl<<"Please Enter Student Nationality= "<<endl;
  cin.getline(nationality,50);
  
  cout<<endl<<"Note: Please Enter '1' if you want to save data in New.txt file"<<endl;
  cin>>choice_2;
  
  if(choice_2 == 1)
{
	
   
  fstream myfile;
  myfile.open("New.txt", ios::out | ios :: app);
  
  myfile<<name<<endl;
  myfile<<reg_no<<endl;
  myfile<<marks<<endl;
  myfile<<address<<endl;
  myfile<<phone_number<<endl;
  myfile<<nationality<<endl<<endl<<endl;
  
  myfile.close();
  
  cout<<endl<<"Data Saved Successfully!!"<<endl;
  std::cin.get();
  
}

else
{
cout<<endl<<"Previous data is not saved, continue for next student"<<endl;	
}
  	
  }


  cout<<endl<<"Please Enter your Choice???"<<endl;
  cout<<endl<<"1- Copy data of New.txt file to New2.txt file"<<endl;
  cout<<endl<<"2- Enter Any other number to exit!!"<<endl;
  
  cin>>choice_1;



if (choice_1 == 1)
{

  
	char c;
	ifstream i_file("New.txt");
	ofstream o_file("New2.txt");
	
	while (i_file.get(c))
	{
		o_file.put(c);
	}
	
	i_file.close();
	o_file.close();
	cout<<"Copied Successfully!!";
  	
}

else
{
	return 0;
}
	return 0;


}


