#include <iostream>
#include <string>
using namespace std;
class Animal{
protected: 
string name; 
public: 
virtual void fun()=0; 
Animal(string n) { name = n; } 
}; 
void Animal::fun()
{
	cout<<"Sound of Animal..."<<endl;
}
  
class Cat: public Animal 
{  
public: 
    void fun() { cout << "This is cat..."; } 
}; 
  class Dog: public Animal 
{  
public: 
    void fun() { cout << "This is a Dog..."; } 
}; 
  
int main() 
{ 
Animal *a1;
    Cat c1;
Dog d1;
    a1=&c1;
a1->fun();
a1=&d1;
a->fun(); 
    return 0; 
}

