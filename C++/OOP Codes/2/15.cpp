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
			cout<<"Enter Feets="<<endl;
			cin>>feet;
			cout<<"Enter Inches="<<endl;
			cin>>inches;
		}
		 bool operator ==(const Distance&n)
  {
  
  	bool result;
  	result=(feet==n.feet )&& (inches==n.inches);
 		return result;
	}
 bool operator >(const Distance&n)
  {
  	bool result;
 	result=(feet>n.feet) && (inches>n.inches);
    return result;                                                                                                                                                                                
 }
 
  bool operator <(const Distance&n)
  {
  	bool result;
 	result=(feet<n.feet) && (inches<n.inches);
    return result;                                                                                                                                                                                
 }
};
int main() {
	cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Check whether which Distance is Greater and which is Smaller....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
	Distance p;
	p.set_distance();
	Distance s(7.9,8.6);
	if(p==s)
	{
		cout<<"P is Equal to S..."<<endl;
	}
	else if(p>s)
	{
		cout<<"p is Greater than S.."<<endl;
	}
	else if(p<s)
	{
		cout<<"P is Smaller than S.."<<endl;
	}
	else
	cout<<"Invalid Input";
	return 0;
}

