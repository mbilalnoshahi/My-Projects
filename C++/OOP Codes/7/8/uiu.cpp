#include <iostream>
using namespace std;
class Engine
{
	int quality,power,cylinder;
	public:
		Engine()
		{
			quality=0;
			power=0;
			cylinder=0;
		}
		Engine(int q,int p,int c)
		{
			quality=q;
			power=p;
			cylinder=c;
			
		}
	void	set_e()
		{
			cout<<"Please Enter quality= "<<endl;
			cin>>quality;
			cout<<"Please Enter the Power Of Engine= "<<endl;
			cin>>power;
			cout<<"Please Enter Cylinder Number= "<<endl;
			cin>>cylinder;
			
		}
		void get_e()
		{
			cout<<"Quality= "<<quality<<endl<<endl;
			cout<<"Power= "<<power<<endl<<endl;
			cout<<"Cylinder= "<<cylinder<<endl<<endl;
		}
	
};
class Car{
	int model,tyres,colour,speed;
};
int main() {
	cout<<"Assalamoalaikum...."<<endl<<endl<<endl;
	cout<<"Welcome by Bilal in C++...."<<endl<<endl<<endl;
	Engine q;
	q.set_e();
	q.get_e();
	return 0;
}
