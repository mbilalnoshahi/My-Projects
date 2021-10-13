#include <iostream>
using namespace std;
class Fifo_Queue
{
int fifo[100];
int size=100;	
int front,rear;
public:
Fifo_Queue()
{
front=-1;
rear=-1;
}		
void insertion()
{
int val;
if (rear == size - 1)
{
cout<<endl<<"***Error, Your Queue is Full***"<<endl;
}
else {
if (front==-1)
front = 0;
cout<<endl<<"Now Please Enter the Elements in Queue= "<<endl;
cin>>val;
rear++;
fifo[rear] = val;
}
}
void deletion()
{
if (front==-1&&rear==-1 || front>rear)
{
cout<<endl<<"***Error, Your Queue is Full***"<<endl;
} 
else
{
cout<<endl<<"The Element Deleted from the Queue is= "<<fifo[front]<<endl;
front++;
}
}
void display()
{
if(rear==-1 && front==-1)
{
cout<<endl<<"***Error, Your Queue is Empty***"<<endl;
}
else 
{
cout<<endl<<"Queue is= "<<endl;
for(int i=front;i<=rear;i++)
{
cout<<fifo[i]<<" ";
}
}
}
};
int main()
{
Fifo_Queue f1;
int ch;
do
{
cout<<endl<<endl;
cout<<endl<<"0- EXIT "<<endl;
cout<<"1- INSERTION "<<endl;
cout<<"2- DELETION "<<endl;
cout<<"3- DISPLAY "<<endl;
cout<<endl<<"Now Enter your Choice= ";
cin>>ch;
switch(ch)
{
case 0:
break;
case 1:
f1.insertion();
break;
case 2:
f1.deletion();
break;
case 3:
f1.display();
break;
default:
cout<<"***Error, Invalid Input***"<<endl;
}
}
while (ch!=0);
return 0;
}	

