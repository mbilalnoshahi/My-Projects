
#include<iostream>
using namespace std;

class Angle { // To make a class of name "Angle"...
       int d; //variable to store the degree
       float m; //variable to store the min
       char direction; //variable to store the direction
public:
       Angle() :d(0), m(0), direction(0) 
	   {
	   } //deafault constructor intizalizes the private members to zero
       Angle(int de, float mi, char n) :d(de), m(mi), direction(n) {} //constructor intizalizes the private members to according to the user given values

                                                                                                                       //set_angle(int, float, char);
       void display() //declaation of a function to display the angle
       {
       	cout<<d<<'\xF8'<<m<<direction;
	   }
};
Angle setdata(); //declaration of a function to take the position from the user
int main()
{
	cout << " ````````Welcome To My C++ Program``````````"<<endl;
	cout << endl;
	cout << " Here you Can Search Latitude and Longitude in Degrees,Minutes and also Find Direction......"<<endl;
	cout << endl;
	cout << " So Lets Go!!!!!" <<endl;
       Angle latitude, longitude; //creating objects of Angle class
       
       cout << " Enter the Latitude= " <<endl;
       latitude = setdata(); //calling of a function to take the lattitude from the user
       latitude.display();
       cout<<endl<<endl;
       cout << " Enter the Longitude= " <<endl;
       longitude = setdata(); //calling of a function to take the lattitude from the user
	   longitude.display(); 
	   cout<<endl<<endl;
       system("pause");
}
/*void Angle::set_angle(int d, float m, char a) //function to set the angle
{
degree = d;
min = m;
dir = a;
}*/
/*void Angle::display() //function to display the angle
{
       cout << d << "\xF8" << m << "\' " << direction << endl;

}
*/
Angle setdata()   // function to take the position from the user
{
       int deg; float min; char dir;
       cout << "   Degree= ";
       while (!(cin >> deg))
       {
              cin.clear();
              cin.ignore();
              cout << "valid input... " <<endl;
              cout << "  Again Enter the Degree:";
       }

       cout << "   Minutes= ";
       while (!(cin >> min))
       {
              cin.clear();
              cin.ignore();
              cout << "valid input::::: " <<endl;
              cout << "  Again Enter the Minutes:";
       }
       cout << "   Direction :";
       while (!(cin >> dir))
       {
              cin.clear();
              cin.ignore();
              cout << "valid input---- " <<endl;
              cout << "  Again Enter the Direction:";
       }

       return Angle(deg, min, dir);
}


