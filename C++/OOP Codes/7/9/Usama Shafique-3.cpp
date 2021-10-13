#include <iostream>
#include <string>
using namespace std;
class publication
{
	protected:
	string title;
	float price;
	
  
 public:
 	publication()
 	{
 		title='\0';
 		price=0;
	 }
	 publication(string t,float p)
	 {
	 	title=t;
	 	price=p;
	 }
	 void getdata()
	 {
	 	cout<<"title is: "<<endl;
	 	cin>>title;
	 	cout<<"price is: "<<endl;
	 	cin>>price;
	 }
};
class book:public publication
{
	protected:
	int page_count;
	public:
		book():publication()
		{
		page_count=0;
		title='\0';
 		price=0;	
		}
		book(string x,float y,int z):publication(x,y)
		{
			page_count=z;
			title=x;
 		price=y;
		}
		void getdata_book()
		{
			cout<<"page count is: "<<endl;
			cin>>page_count;
		}
		void putdata_book()
		{
		cout<<"title: "<<title<<endl;
	 	cout<<"price: "<<price<<endl;
	 	cout<<"page count: "<<page_count<<endl;
		}
};
class tape:public publication
{
	protected:
float min;
public:
tape():publication()
{
		title='\0';
 		price=0;
 		min=0;
	}	
	tape(string f,float g,float h):publication(f,g)
	{
			title=f;
 		price=g;
 		min=h;
	}
	void getdata_tape()
	{
		cout<<"minutes are: "<<endl;
		cin>>min;
	}
	void putdata_tape()
	{
		cout<<"title: "<<title<<endl;
	 	cout<<"price: "<<price<<endl;
		cout<<"minutes: "<<min<<endl;
	}
};

int main()
 {
 	book bb("object oreinted programing",58.87,9870);
    bb.putdata_book();
    bb.getdata();
    bb.getdata_book();
    bb.putdata_book();
    tape tt("Usama Shafique",67.88,0990.65);
    tt.putdata_tape();
    tt.getdata();
    tt.getdata_tape();
    tt.putdata_tape();
    
		return 0;
}
