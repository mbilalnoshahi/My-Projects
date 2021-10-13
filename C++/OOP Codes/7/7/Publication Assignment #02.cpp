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
	publication(string x,float y)
	{
		title=x;
		price=y;
		
	}
	getdata()
		{
		cout<<"Enter Title Of Publication: "<<endl;
		cin>>title;
		cout<<"Enter Price Of Publication: "<<endl;
		cin>>price;	
		}
};
class book:public publication
{
int page;
public:
book():publication()
{
    	page=0;
	}	
	book(string t1,float p1,int c1):publication(t1,p1)
	{
		title=t1;
			price=p1;
    	page=c1;
	}
getbook()
		{
			cout<<"Enter Pages Of the Book: "<<endl;
			cin>>page;
		}
		putbook()
		{
			cout<<"Title Of the Book: "<<title<<endl;
			cout<<"Price Of the Book: "<<price<<endl;
			cout<<"Page Of the Book: "<<page<<endl;
		}	
};
class tape:public publication
{
	float min;
	public:
		tape():publication()
		{
    	min=0;
		}
		tape(string t2,float p2,float m2):publication(t2,p2)
		{
			title=t2;
				price=p2;
    	
    	min=m2;
		}
		gettape()
		{
			cout<<"Enter Minutes: "<<endl;
			cin>>min;
		}
		puttape()
		{
			cout<<"Title is: "<<title<<endl;
			cout<<"Price is: "<<price<<endl;
			cout<<"Minutes are: "<<min<<endl;
		}
};
 
int main()
{
   book s("England",552.3,789);
   s.putbook();
   s.getdata();
   s.getbook();
    s.putbook();
    tape d("HITEC",6676.6,4.7);
    d.puttape();
    d.getdata();
    d.gettape();
     d.puttape();
   return 0;
}
