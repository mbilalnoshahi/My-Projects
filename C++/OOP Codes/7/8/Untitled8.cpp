#include <iostream> 
using namespace std; 
  
class construct 
{  
private:    
        int a,b;
        float c=0.0;
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
		cout<<"Value of a="<<a<<endl;
		cout<<"Value of b="<<b<<endl;
}
construct(float d)
{
	cout<<"Object Created...."<<d<<endl;
	c=d;
}
~construct()
{
	cout<<"object destroyed"<<endl;
}
}; 

  
int main() 
{ 
    construct construct(0.0);
	
	 
    construct.setdata();
	construct.showdata();
    return 0; 
}
