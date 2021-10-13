#include <iostream>
using namespace std;

class Base 
{ 
protected: 
   int x; 
public: 
Base()
{
	x=0;
}
  virtual void fun() = 0; 
  Base(int i) { x = i; } 
}; 
void Base::void fun()
{
	cout<<"Derived...";
}
  
class Derived: public Base 
{ 
    int y; 
public: 
    Derived(int i, int j):Base(i) { y = j; } 
    void fun() { cout << "x = " << x << ", y = " << y; } 
}; 
  
int main(void) 
{ 
    Derived d(4, 5); 
    d.fun(); 
    return 0; 
}

