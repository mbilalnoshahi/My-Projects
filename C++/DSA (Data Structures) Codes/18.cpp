#include <iostream>
using namespace std;
struct Node
{
int data;
Node *next;
};
class Fifo_Queue
{
Node *front,*rear;
int size;
public:
Fifo_Queue()
{
front=NULL;
rear=NULL;
size=0;
}	
void insertion()
{
Node *newnode=new Node;
cout<<endl<<"Please Enter the Values in the Queue= "<<endl;
cin>>newnode->data;
newnode->next=NULL;
if(front==NULL&&rear==NULL)
{			
front=newnode;
rear=newnode;
cout<<endl<<"***First Node is Created***"<<endl;
}
else if(front==rear){
front->next=newnode;
rear=newnode;
cout<<"***Second Node is Created***"<<endl;
}
else
{
rear->next=newnode;
rear==newnode;
cout<<"***Another Node is Created***"<<endl;
}
++size;
}	
void deletion()
{
Node *temp;
if(front==NULL&&rear==NULL)
{
cout<<"***Error, Queue is Empty***"<<endl;
}
else
{
cout<<"Deleted Element was= "<<front->data<<endl;
temp=front;
front=front->next;
delete temp;
--size;	
}
}
void display()
{
if(front==NULL&&rear==NULL)
{
cout<<"***Error, Queue is Empty***"<<endl;
}
else
{
Node *current=new Node;
current=front;
cout<<"Your Current Queue is= "<<endl;
while(current!=NULL)
{
cout<<current->data<<" ";
current=current->next;
}
}
cout<<endl<<"And Size of Your Queue is= "<<size<<endl;
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
cout<<endl<<"PLease Enter your Choice= ";
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
