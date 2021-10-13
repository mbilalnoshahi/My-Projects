#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
string s;
ifstream B;
B.open("cities.txt");
if (B.is_open() )
{
while (B)
{	
cout<<s;
cout<<endl<<endl;
B>>s;
}
cout<<endl<<endl;		
}
else
cout<<"Default Value.....";
return 0;
}
