#include <iostream>
#include <fstream>

using namespace std;

int main(){

  char arr[200];
  
  cout<<"Enter your namE AND age"<<endl;
  cin.getline(arr,100);
  
  ofstream myfile("New.txt");
  
  myfile<<arr;
  myfile.close();
  
  cout<<"Done Successfully!!";
  return 0;
}
