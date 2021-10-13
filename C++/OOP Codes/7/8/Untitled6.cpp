#include <iostream> 
using namespace std; 
  
class construct 
{  
private:   
    
       int a = 10; 
        int b = 20; 
    int somedata;
public:
setdata(int a)
{
	somedata=a;
	}    
	showdata()
	{
		cout<<somedata<<endl;
		
	}
	setb(int b)
	{
		somedata=b;
	}
	showb()
	{
		cout<<somedata<<endl;
	}
}; 
  
int main() 
{ 
    construct c; 
    cout << "a: "<< c.a << endl << "b: "<< c.b; 
    return 0; 
}
