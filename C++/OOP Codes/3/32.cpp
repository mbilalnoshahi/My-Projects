#include <iostream>
#include <fstream>
using namespace std;
int main()
{
string s;
ofstream B;
B.open("cities.txt");
if (B.is_open())
{
while(B)
{
getline(cin,s);
if(s=="5")
break;
B<<s<<endl;	
}
}
else
cout<<"Default Value.........";
return 0;
}
