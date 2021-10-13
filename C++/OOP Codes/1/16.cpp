#include <iostream>
using namespace std;

class box{
	int length,width,breadth,Volume;
	public:
		box()
		{
			length=0;
			width=0;
			breadth=0;
		}
		box(int l, int w, int b)
		
		{
			length=l;
			width=w;
			breadth=b;
			
	}
 box operator+(const box&n)
  {
  	box b;
 	b.length=length+n.length;
 	b.width=width+n.width;
 	b.breadth=breadth+n.breadth;
    return b;                                                                                                                                                                                 
 }
  box operator-(const box&n)
  {
  	box b;
 	b.length=length-n.length;
 	b.width=width-n.width;
 	b.breadth=breadth-n.breadth;
    return b;                                                                                                                                                                                 
 }
  box operator*(const box&n)
  {
  	box b;
 	b.length=length*n.length;
 	b.width=width*n.width;
 	b.breadth=breadth*n.breadth;
    return b;                                                                                                                                                                                 
 }
 box operator/(const box&n)
  {
  	box b;
 	b.length=length/n.length;
 	b.width=width/n.width;
 	b.breadth=breadth/n.breadth;
    return b;                                                                                                                                                                                 
 } 
	void display()
	{
		Volume=length*width*breadth;
		cout<<"Volume Of a Box= "<<Volume<<endl;
	}
};

int main()
{
	cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Add,Substract or Devide the Volume Of a Box......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
	box q;
	box c2(8,46,2);
	box c3(6,2,2);
	
	q=c2+c3;
	cout<<"Added Volume...."<<endl<<endl;
	q.display();
	cout<<endl;
	q=c2-c3;
	cout<<"Difference of Volume...."<<endl<<endl;
	q.display();
	cout<<endl;
	q=c2*c3;
	cout<<"Product Of Volume....."<<endl<<endl;
	q.display();
	cout<<endl;
	q=c2/c3;
	cout<<"Divided Volume...."<<endl<<endl;
	q.display();
}

