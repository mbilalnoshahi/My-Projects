#include <iostream>
#include <string.h>

using namespace std;


struct node
{
    int data;
    node *next;
};
node *head[7];

void Add_Node(int d,int c)
{
    node *newnode=new node;
    node *cur=head[c];
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->data=d;
    newnode->next=NULL;
}


void insert()
{
    int s1;
    int s2;
    string ch;
    do{

    cout<<"Please Enter the Source= ";
    cin>>s1;
    cout<<endl<<"Now please Enter the Sink= ";
    cin>>s2;
    Add_Node(s2,s1);
    cout<<endl<<endl<<"Are you want to Enter more Nodes?? Press Yes= "<<endl<<endl;
    cin>>ch;
    cout<<endl;
}

while(ch=="yes"||ch=="Yes"||ch=="YES");
while(ch=="no"||ch=="NO"||ch=="No")
{
	break;
}
}

void display()
{
      for(int i=0;i<4;i++)
{
    node *curr=head[i];
    cout<<endl<<endl<<".....Given Vertex....."<<endl<<endl;
    cout<<curr->data<<" HEAD---> ";

    while(curr->next!=NULL)
    {
        curr=curr->next;
    cout<<curr->data<<" ---> ";

    }

    cout<<" NULL"<<endl;
}

}
int main()
{

int t;
cout<<endl<<endl<<"How many times you run the loop= "<<endl<<endl;
cin>>t;
{
    for( int i=0;i<=t;i++)
{
    node *new_node=new node;
    head[i]=new_node;
    new_node->data=i;
    new_node->next=NULL;
}
insert();
display();

}
}

