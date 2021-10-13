#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
int a;
/*
ofstream B;
B.open("MyData.txt");	 
if (B.is_open() )
{
cin>>a;
B<<a;
B.close();
}
else
{
cout<<"Default Value........"<<endl;
} 

*/
  
/*

ifstream s;
s.open("MyData.txt");
if (s.is_open() )
{
s>>a;
cout<<a;
s.close();    
}
else
{
cout<<"Default Value......"<<endl;
}
*/
/*
int sum=0;
int total=0;
ofstream B,d;

      B.open("result.txt");
       	if (B.is_open() )
{
	for (a=5;a>0;a--)
	{
		sum=sum + a;
		
		B<<sum;
		cout<<endl;
		total=total+sum;
	}
	B<<"total="<<total;
	B.close();
}
*/

    
	 ifstream z;
	 
	string sum;
	 z.open("result.txt");
 	if (z.is_open() )
 	{
 			for (int i=0;i<a+1;i++)
 			{
 				getline(z,sum);
 					cout<<sum;
 				cout<<endl;
 				
		}
			 z.close();
			  } 
			  
 else
cout<<"invalid output:"<<endl;

} 

