#include <iostream>
using namespace std;
 
struct node
	{
		int data;
		node *next;
	};
	class list
	{
		private:
			node *head,*tail;
			public:
				list()
				{
					head=NULL;
					tail=NULL;
				}
				void insert()
				{
					node *na=new node;
					cout<<"Please Enter the node's value in List= "<<endl;
					cin>>na->data;
					na->next=NULL;
				
	if(head==NULL&&tail==NULL)
	{
	
		cout<<"Enter the First node in the list= "<<endl;
}
	else
	{
		cout<<"YOu have entered 2nd or higher order node..."<<endl;
		cout<<"Where you want your node to be..."<<endl;
		cout<<"Enter '1' for Start, Enter '2' for Middle, Enter '3' for Last..."<<endl;
		cout<<"Now Please Enter your Choice..??"<<endl;
		int ch;
		cin>>ch;
		if(ch==1)
		{
			cout<<"Your node will be the head of the list..."<<endl;
			na->next=head;
			head=na;
			
		}
		else if(ch==2)
		{
			cout<<"Your Node will be the Tail of the list..."<<endl;
			na->next=tail;
			tail=na;
		}
	

	else if(ch==3)
	{
		cout<<"Your Node will be the Middle of the list..."<<endl;
	    cout<<"Your Current list is..."<<endl;
	node *cc=head;
	while(cc!=NULL)
	{
		cout<<cc->data<<endl;
		cc=cc->next;
	}
	cout<<"Please Enter the Value before which you want to enter your new node= "<<endl;
	int num;
	cin>>num;
	node *current=head;
	node *previous=NULL;
	while(current->next=NULL)
	{
		previous=current;
		current=current->next;
		if(num==current->data)
		break;
	}
	previous->next=na;
	}
	else
	cout<<"Invalid Input...."<<endl;
}
}
void display()
{
	cout<<"Link list is= "<<endl;
	node *current=head;
	while(current!=NULL)
	{
		cout<<current->data<<endl;
		current=current->next;
	}
}
	};
int main() {
	cout<<"Assalamoalaikum..."<<endl;
	cout<<"Welcome by Bilal in C++ Compiler..."<<endl;
	cout<<"Here You insert the number in the list according to your choice..."<<endl;
	cout<<"So, don't waste your time and move forward...."<<endl;
	list Bilal;
	Bilal.insert();
	Bilal.display();
	return 0;
}
