#include <iostream>
#include <fstream>
using namespace std;
int main()
{
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here these are the numbers and their output of program which you have used above....."<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;
int s,p,d;
ifstream B;
ifstream B1;
ifstream B2;
B.open("FirstInput.txt");
B1.open("SecondInput.txt");
B2.open("FinalAnswer.txt");
if (B.is_open() && B1.is_open() &&  B2.is_open() )
{	
B>>s;
cout<<s;
B.close();
cout<<endl;
B1>>p;
cout<<p;
B1.close();
cout<<endl;
B2>>d;
cout<<d;
B2.close();
}
else
cout<<"Default Value...........";
return 0;
}


