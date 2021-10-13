#include <iostream>
using namespace std;
int fabonacci(int val) {
if((val==1)||(val==0)) 
{
return(val);
}
else 
{
return(fabonacci(val-1)+fabonacci(val-2));
}
}
int main() {
cout<<endl<<endl<<"Assalamoalaikum"<<endl<<endl;
cout<<endl<<endl<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<endl<<endl<<"Here You Can Enter a number and program will generate Fabonacci series according to this Number......"<<endl;
cout<<endl;
cout<<endl<<endl<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int num,i=0;
cout<<endl<<endl<<"Please Enter the Number of terms of series= ";
cin>>num;
cout<<endl<<endl<<"\nFibonnaci Series of the given Number= ";
while(i < num) {
cout<<fabonacci(i)<<" ";
i++;
}
return 0;
}
