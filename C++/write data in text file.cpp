#include <iostream>
#include <fstream>

using namespace std;

int main(){

  char name[50];
  char reg_no[50];
  char marks[50];
  char address[100];  
  char phone_number[50];
  char nationality[50];
  
  cout<<"Hi! Welcome to C++ Program"<<endl;
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
  
  myfile<<name;
  myfile<<reg_no;
  myfile<<marks;
  myfile<<address;
  myfile<<phone_number;
  myfile<<nationality;
  
  myfile.close();
  
  cout<<"Done Successfully!!";
  std::cin.get();
  return 0;
}
