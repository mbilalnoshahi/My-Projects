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
  
  cout<<"Hi! Welcome to C++ Program"<<endl;
  cout<<"Do you want to enter data in New.txt file?";
  cout<<"1= Yes";
  cout<<"2- No";
  cin>>choice_1;
  
  if (choice_1 == 1)
  {
  
  cout<<endl<<"Please Enter your name= "<<endl;
  cin.getline(name,50);
  cout<<endl<<"Please Enter your reg_no= "<<endl;
  cin.getline(reg_no,50);
  cout<<endl<<"Please Enter your marks= "<<endl;
  cin.getline(marks,50);
  cout<<endl<<"Please Enter your address= "<<endl;
  cin.getline(address,100);
  cout<<endl<<"Please Enter your Contact= "<<endl;
  cin.getline(phone_number,50);
  cout<<endl<<"Please Enter your Nationality= "<<endl;
  cin.getline(nationality,50);
 
  ofstream myfile;
  myfile.open("New.txt");
  
  myfile<<name<<endl;
  myfile<<reg_no<<endl;
  myfile<<marks<<endl;
  myfile<<address<<endl;
  myfile<<phone_number<<endl;
  myfile<<nationality<<endl;
  
  myfile.close();
  
  cout<<"Done Successfully!!";
  std::cin.get();
  return 0;
  
}

else
{
	return 0;
}
}
