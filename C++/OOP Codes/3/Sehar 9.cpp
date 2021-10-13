#include <iostream>
using namespace std;
class shape
{
	protected:
		float height ;                   
		float width;
	public:
       virtual  float set_height()=0;
        virtual float set_width()=0;
		virtual void area()=0;
};
void shape::area()
{
	cout<<"height is:"<<height<<endl;
	cout<<"width is:"<<width<<endl;
}
float shape::set_height()
{
	cout<<"enter the height:"<<endl;
         	cin>>height;
		 }
float shape::set_width()
{
	cout<<"enter the width is:"<<endl;
		 		cin>>width;
 }
 class triangle:public shape
{
	private:
		float x;
		float y;
	public:
		
		void area ()
		{
			cout<<"area of a triangle is:"<<endl;
			cout<<0.5*height*width;
		}
		float set_height()
		{
			cout<<"enter the height:"<<endl;
               cin>>height;
		}
		float set_width()
		{
			cout<<"enter the width is:"<<endl;
               cin>>width;
		}
		
};
class rectangle:public shape
{
	private:
		float a;
		float b;
	public:
	
		void area ()
		{
			cout<<"area of a rectangle is:"<<endl;
			cout<<height*width;
		}
		float set_height()
		{
			cout<<"enter the height:"<<endl;
               cin>>height;
		}
		float set_width()
		{
			cout<<"enter the width is:"<<endl;
               cin>>width;
		}
};
int main() 
{
	shape *s;
	triangle t;
	rectangle r;
	cout<<"*********************AREA OF A TRIANGLE IS*********************:"<<endl<<endl;
	s=&t;
	s->set_height();
	s->set_width();
	s->area();
	cout<<endl;
	cout<<"*******************AREA OF A RECTANGLE IS************************:"<<endl<<endl;
	s=&r;
	s->set_height();
	s->set_width();
	s->area();
}
