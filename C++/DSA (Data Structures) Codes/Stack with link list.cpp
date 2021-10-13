#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

class Stack
{
	int size;
	Node *top;
	
	public:
		int val;
		Stack()
		{
			size=0;
			top=NULL;
		}
		void push()
		{
				Node *N=new Node;
		
		cout<<endl<<"Please Enter the Value in the Stack= "<<endl;
		cin>>val;
		cout<<endl<<"And Address is= "<<N<<endl;
	
		N->data=val;
		N->next=NULL;
	
		if(top==NULL)
		{
			
				top=N;
				cout<<endl<<"AnD the Enter Number would be the first Node having address= "<<top<<endl;
				cout<<endl<<"And value is= "<<val<<endl;
			
		}
		
	
		else 
		{
		N->next=top;
		top=N;
	}
		size++;
		
		}
		
		void pop()
		{
			if (top==NULL)
			{
				cout<<endl<<"Stack is Empty...."<<endl;
			}
			else
			{
				Node *temp;
				temp=top;
				top=top->next;
				delete temp;
				cout<<endl<<"Deleted Value was= "<<val<<endl;
				cout<<endl<<"Having Address= "<<temp<<endl;
				size--;
				
			}
		}
		
		void display()
		{
			cout<<endl<<"Link list is= "<<endl;
			Node *cur=new Node;
			cur=top;
			while (cur!=NULL)
			{
				cout<<cur->data<<endl;
				cur=cur->next;
			}
			
			cout<<"Size of your Stack= "<<size<<endl;
		}
	
};
int main() {
	Stack s1;
	int choice,val;
	
	cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>choice;
      switch(choice) {
         case 1: {   
            s1.push();
            break;
         }
         case 2: {
            s1.pop();
            break;
         }
         case 3: {
            s1.display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   
   while(choice!=0); 
      return 0;
}


