#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class Circular_list{
	private:
	node*head,*tail;
    public:
    	Circular_list()
    	{
    		head=NULL;
    		tail=NULL;
		}	
		void insert()
		{
			node *nn=new node;
			cout<<"please enter the node value"<<endl;
			cin>>nn->data;
			nn->next=NULL;		
		if(head==NULL&&tail==NULL)
		{
			cout<<"you entered the first node in the list"<<endl;
			head=nn;
			tail=nn;
		}
		else
		{
			cout<<"you entered 2nd or higher ordered node"<<endl;
			cout<<"in list where you want to enter this node?"<<endl;
			cout<<"1. Start.."<<endl<<"2. Middle.."<<endl<<"3. End.."<<endl;
			int ch;
			cin>>ch;
			if(ch==1)
		   {
			nn->next=head;
			head=nn;
		   }
		   else if(ch==3)
		   {
		   	tail->next=nn;
		   	tail=nn;
		   }
		   else if(ch==2)
		   {
		   	cout<<"you want to enter in the middle:"<<endl;
		   	node *cc=head;
		   	while(cc!=NULL)
		   	{
		   		cout<<cc->data<<"\t";
		   		cc=cc->next;
			}
			int num;
		   	cout<<"enter the number after which you want to enter the node = ";
		   	cin>>num;
		   	node *current=head;
		   	node *previous=NULL;
		   	while(current->next!=NULL)
		   	{
		   		previous=current;
		   		current=current->next;
		   		if(num==current->data)
		   		break;
			   }
			   previous->next=nn;
			   nn->next=current;
		   }
		   else 
		   {
		   cout<<"invalid choice"<<endl;}
		   tail->next=head;
        
		}
		
	    }
	void deleteFirstNode()      //deletion
      {
    node*toDelete;

    if(head == NULL)
    {
        cout<<"List is already empty.";
    }
    else
    {
        toDelete = head;
        head = head->next;
        cout<<"\nData deleted ="<<toDelete->data;
        cout<<"\nSUCCESSFULLY DELETED FIRST NODE FROM LIST\n";
        }
    }
    void deleteEndNode()   
    {
      node *toDelete, *secondLastNode;

    if(head == NULL)
    {
        cout<<"List is already empty.";
    }
    else
    {
        toDelete = head;
        while(toDelete->next != tail)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }
         
        if(toDelete == head)
        {
            head = NULL;
        }
        else
        {
        secondLastNode->next=tail->next;
        tail=secondLastNode;
        }

        cout<<"\nSUCCESSFULLY DELETED LAST NODE OF LIST\n";
        }
		}
	void deleteMiddleNode()   
	{
			int i,pos;
    struct node *current, *prevNode;
    cout<<"\n link list\n";
	    current=head;
	    do
	    {
	    	cout<<"\n"<<current->data<<"|";
	    	current=current->next;
		}
		while(current!=tail->next);
    if(head == NULL)
    {
        cout<<"List is already empty.";
    }
    else
    {
    	cout<<"enter the num you want to del";
    	cin>>pos;
        current = head;
        prevNode = head;
        
        for(i=2; i<=pos; i++)
        {
            prevNode = current;
            current = current->next;

            if(current == NULL)
                break;
        }

        if(current->next != tail)
        {
            if(current == head)
                head = head->next;

            prevNode->next = current->next;
           current->next = NULL;

            cout<<"\nSUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST\n";
        }
        else
        {
            cout<<"Invalid position unable to delete.";
        }
    }
		}
	    void display()
	    {
	     node *current=head;
	    do
	    {
	    	cout<<current->data<<"->";
	    	current=current->next;
		}
		while(current!=tail->next);		
		}
};
int main() 
{
    
    Circular_list l;
	l.insert();                      //inserting any node
	l.insert();
    l.insert();
    cout<<"Which node you want to delete?"<<endl;
	cout<<"1. Start"<<endl<<"2. Middle"<<endl<<"3. End"<<endl;
	int ch;
	cout<<"Choice?";
	cin>>ch;
	if(ch==1)            //deleting desired node
	{
		l.deleteFirstNode();
	}
	else if(ch==2)
	{
		int pos;
	cout<<"please enter the position of node which you want to delete?"<<endl;
    cin>>pos;
    l.deleteMiddleNode();
    }
    else if(ch==3)
    {
    	l.deleteEndNode();
	}
    l.insert();
	l.display();                   //display final result
	return 0;
}
