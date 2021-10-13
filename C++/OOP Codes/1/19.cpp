#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Auther{
	string name,email;
	char gender;
	public:
		Auther()
		{
			name='\0';
			email='\0';
			gender='\0';
		}
		Auther(string e,string m,char g)
		{
			email=e;
			name=m;
			gender=g;
		}
		void set_auther()
		{
			cout<<"Auther Name= "<<endl;
			cin>>name;
			cout<<"Email= "<<endl;
			cin>>email;
			cout<<"Gender= "<<endl;
			cin>>gender;
		}
		
		void get_auther()
		{
			cout<<"Name Of Auther= "<<name<<endl;
			cout<<"Email= "<<email<<endl;
			
			cout<<"Gender= "<<gender<<endl;
		}
		
};
class Book
{
	int quantity;
	string name;
	double price;
	Auther auther_details;
	public:
		Book()
		{
			Auther();
			name='\0';
			price=0.0;
			quantity=0;
		}
		Book(Auther a2,double p,string m,int q){
			auther_details=a2;
			name=m;
			price=p;
			quantity=q;
		}
		void set_book()
		{
			cout<<"Enter Book Name= "<<endl;
			cin>>name;
			cout<<"Enter Quantity= "<<endl;
			cin>>quantity;
			auther_details.set_auther();
			cout<<"Price= "<<endl;
			cin>>price; 
		}
		void get_book()
		{
			cout<<"Entered Value......."<<endl<<endl<<endl;
			cout<<"Name Of Book= "<<name<<endl;
			cout<<"Quantity= "<<quantity<<endl;
			auther_details.get_auther();
			cout<<"Price= "<<price<<endl;
			cout<<endl<<endl;
		}
};
int main() {
			cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check the Record of a Book......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
	Book b;
	b.set_book();
	b.get_book();
	Auther a9("mbilalnoshahi@gmail.com","Bilal",'M');
	Book u(a9,4.7,"Bachpan ka December",89);
	u.get_book();
	return 0;
}
