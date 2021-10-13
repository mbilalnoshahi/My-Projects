#include<iostream>
using namespace std;
void Tower_Of_Hanoi(int size,char Start, char Middle,char End)
{ 
if(size==1)
{
cout<<"Move Disk "<<size<<" from "<<Start<<" to "<<End<<endl;
return;
}
Tower_Of_Hanoi(size-1,Start,End,Middle);
cout<<"Move Disk "<<size<<" from "<<Start<<" to "<<End<<endl;
Tower_Of_Hanoi(size-1,Middle,Start,End);
}
int main()
{ 
cout<<endl<<endl<<"Assalamoalaikum"<<endl<<endl;
cout<<endl<<endl<<"Welcome by Bilal in C++ Programming......"<<endl;
cout<<endl;
cout<<endl<<endl<<"Here You Can play with Tower of Hanoi according to Number of disks......"<<endl;
cout<<endl;
cout<<endl<<endl<<"So don't waste your time and move forward....."<<endl;
cout<<endl;	
int num;
cout<<endl<<endl<<"Please Enter Number of disks= ";	
cin>>num; 
Tower_Of_Hanoi(num,'A','B','C');
return 0;
}
