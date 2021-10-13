#include <iostream>
using namespace std;
template <class B>
B sum(B a[100])
{
B sum=0;
for (int i=0;i<100;i++)
{
sum=sum+a[i];
}
return sum;
}
int main()
{
cout<<"Assalamoalaikum"<<endl<<endl;
cout<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<"Here You Can Calculate Sum of an Array Of 100 elements......"<<endl;
cout<<endl;
cout<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int b[100];
for (int i=0;i<100;i++)
{
b[i]=i;
}
cout<<"Value Of Sum in Integer= "<<sum(b)<<endl;
float b1[100];
for (int i=0;i<100;i++)
{
b1[i]=i;
}
cout<<"Value Of Sum in Float= "<<sum(b1)<<endl;
double b2[100];
for (int i=0;i<100;i++)
{
b2[i]=i;
}
cout<<"Value Of Sum in Double= "<<sum(b2)<<endl;
return 0;
}
