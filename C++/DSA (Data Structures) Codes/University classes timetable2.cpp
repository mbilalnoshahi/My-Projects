#include<iostream> 
#include<conio.h>
using namespace std; 
int main() 
{ 
int sunday,monday,tuesday,wednesday,thursday,friday,saturday; 
char choice; 
cout<<"Enter the day"<<endl; 
cin>>choice; 
if(choice==sunday) 
{ 
cout<<"No class for today!!! Go to sleep"<<endl; 
cout<<"Enjoy"; 
} 
else 
{ 
if(choice == monday) 
{ 
cout<<"L-Algebra....."<<endl; 
cout<<"Timing: 08:50 To 11:20 "<<endl<<endl; 
cout<<"C-programing...."<<endl; 
cout<<"Timing: 11:20 To 01:50 "<<endl; 
} 
else 
{ 
if(choice == tuesday) 
{ 
cout<<"Workshop Lab....."<<endl; 
cout<<"Timing: 08:50 To 11:20 "<<endl<<endl; 
cout<<"EM...."<<endl; 
cout<<"Timing: 11:20 To 01:50 "<<endl; 
} 
else 
{ 
if(choice == wednesday) 
{ 
cout<<"C-programing....."<<endl; 
cout<<"Timing: 08:50 To 11:20 "<<endl<<endl; 
cout<<"Workshop tech...."<<endl; 
cout<<"Timing: 11:20 To 01:50 "<<endl; 
} 
else 
{ 
if(choice == thursday) 
{ 
cout<<"BEE....."<<endl; 
cout<<"Timing: 08:00 To 10:30 "<<endl<<endl; 
cout<<"BEE Lab...."<<endl; 
cout<<"Timing: 10:30 To 12:10 "<<endl; 
} 
else 
{ 
if(choice == friday) 
{ 
cout<<"islamiat....."<<endl; 
cout<<"Timing: 08:00 To 10:30 "<<endl<<endl; 
cout<<"C-programing...."<<endl; 
} 
else 
{ 
if(choice==saturday) 
{ 
cout<<"No class for today!!! Go to sleep123"<<endl; 
cout<<"Enjoy"; 
} 
else 
cout<<"no match found"; 
} 
} 
} 
} 
} 
} 
getch(); 
return 0; 
}
