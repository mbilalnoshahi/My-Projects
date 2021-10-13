#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node* next;
Node* left;
Node* right;
};
class List
{
Node *Head,*Tail,*root;
public:
List()
{
Head=NULL;
root=NULL;
Tail=NULL;
} 
void create()
{
Node *temp;
temp=new Node;
int n;
cout<<"\nEnter an Element= ";
cin>>n;
temp->data=n;
temp->next=NULL;
if(Head==NULL)
{
Head=temp;
Tail=Head;
} 
else
{
Tail->next=temp;
Tail=temp;
}
}
void insert()
{
Node *previous,*current;
previous=NULL;
current=Head;
int count=1,pos,AB,n;
Node *temp=new Node;
cout<<"\nEnter an Element= ";
cin>>n;
temp->data=n;
temp->next=NULL;
cout<<"\nINSERT ELEMENTS\n1= FIRSTNODE\n2= LASTNODE\n3= IN BETWEEN FIRST&LAST NODES(MIDDLE)";
cout<<"\nEnter Your Choice= ";
cin>>AB;
switch(AB)
{
case 1:
temp->next=Head;
Head=temp;
break;
case 2:
Tail->next=temp;
Tail=temp;
break;
case 3:
cout<<"\nEnter the Position to Insert= ";
cin>>pos;
while(count!=pos)
{
previous=current;
current=current->next;
count++;
}
if(count==pos)
{
previous->next=temp;
temp->next=current;
}
else
cout<<"\nNot Able to Insert....";
Tail->next=Head;
break; 

}

 
}
void delet()
{
Node *previous=NULL,*current=Head;
int count=1,pos,A;
cout<<"\nDELETE\n1= FIRSTNODE\n2= LASTNODE\n3= IN BETWEEN FIRST&LAST NODES(MIDDLE)";
cout<<"\nEnter Your Choice= ";
cin>>A;
switch(A)
{
case 1:
if(Head!=NULL)
{
cout<<"\nDeleted Element is= "<<Head->data;
Head=Head->next;
}
else
cout<<"\nNot Able to Delete.....";
break;
case 2:
while(current!=Tail)
{
previous=current;
current=current->next;
}
if(current==Tail)
{
cout<<"\nDeleted Element is= "<<current->data;
previous->next=NULL;
Tail=previous;
}
else
cout<<"\nNot Able to Delete.....";
break;
case 3:
cout<<"\nEnter the Position of Deletion= ";
cin>>pos;
while(count!=pos)
{
previous=current;
current=current->next;
count++;
}
if(count==pos)
{
cout<<"\nDeleted Element is= "<<current->data<<endl;
previous->next=current->next;
}
else
cout<<"\nNot Able to Delete....."<<endl;
break;
}
}
void display()
{
Node *temp1=Head;
if(temp1==NULL)
{
cout<<"\nList is Empty...."<<endl;
}
while(temp1!=NULL)
{
cout<<temp1->data;
cout<<"-->";
temp1=temp1->next;
}
cout<<endl;
} 



void display_postorder()
        {
    post_order(root);
}

void post_order(Node* c)
{
    if(c != NULL)
    {
        if(c->left) 
		post_order(c->left);
        if(c->right) 
		post_order(c->right);
        cout<<" "<<c->data<<" ";
    }
    else return;
}



  
};
int main()
{	
List Bilal;
int B,S;
while(1)
{
cout<<endl<<endl;
cout<<"Enter '7' for MENU= "<<endl;
cin>>S;
switch(S)
{	
case 7:
cout<<"**** MENU ****"<<endl;
cout<<"\n1= CREATE\n2= INSERT\n3= TRAVERSE\n4= DELETE\n5= DISPLAY\n6= EXIT\n";
cout<<"Enter Your Choice= "<<endl;
break;
}
cin>>B;
switch(B)
{
case 1:
Bilal.create();
break;
case 2:
Bilal.insert();
break;
case 3:
Bilal.display_postorder();
break;
case 4:
Bilal.delet();
break;
case 5:
Bilal.display();
break;
case 6:
return 0;
break;            
}
}
return 0;
}

