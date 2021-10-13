#include <iostream> 
using namespace std; 
  
class construct 
{  
private:    
        int a,b;
public:
void setdata()
{
	cout<<"Enter a="<<endl;
	cin>>a;
	cout<<"Enter b="<<endl;
	cin>>b;

	}    
	void showdata()
	{
		cout<<"Value="<<a<<endl;
		cout<<"Value="<<b<<endl;
}; 
  
int main() 
{ 
    construct c; 
    c.setdata();
	c.showdata();
    return 0; 
}
