#include <iostream>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Distance 
{
	float feet,inches;
	public:
		Distance()
		{
			feet=0.0;
			inches=0.0;
		}
		Distance(float s,float p)
		{
			feet=s;
			inches=p;
		}
		void set_distance(){
			cout<<"Feet="<<endl;
			cin>>feet;
			cout<<"Inches="<<endl;
			cin>>inches;
		}
		Distance add_distance(Distance d)
		{
			cout<<"Sum Of Distance= "<<endl;
			
			cout<<d.feet+feet<<"\'"<<d.inches+inches<<"\'"<<endl;
		}
		
		void display()
		{
			cout<<feet<<"\'"<<inches<<"\'"<<endl;
		}
};
int main() {
	Distance p;
	Distance a(11.23,35.67);
	p.set_distance();
	cout<<"1= "<<endl;
	p.display();
	cout<<"2= "<<endl;
	p.display();
	p.add_distance(a);
	return 0;
}
