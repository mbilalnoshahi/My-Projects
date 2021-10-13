#include <iostream>
using namespace std;

struct node 
{
   char data;
   node *next;
   node *prev;
};

void getNode(node** begin,char d) 
{
   node* newNode =new node;
   newNode->data =d;
   newNode->next =(*begin);
   newNode->prev =NULL;
  
   if ((*begin) !=NULL)
      
	  (*begin)->prev =newNode ;
      (*begin) =newNode;
}

bool is_palindrome(node *left) 
{
   
   if (left==NULL)
      return true;
   
   node *right=left;
   
   while (right->next!= NULL)
      right =right->next;
   
   while (left !=right && right !=left->prev) 
   {
      if (left->data !=right->data)
         return false;
      left=left->next;
      right=right->prev;
   }
   
return true;
}


int main() {
   node* head=NULL; 
   string element;
   cout<<endl<<"Please Enter the Element= "<<endl;
   cin>>element;
   
   for(int i=0; i<element.length(); i++)
   {
   	
      getNode(&head,element[i]);
   }
   
   if (is_palindrome(head))
   
      cout << "This is Palindrome";
      
   else

      cout << "This is Not a Palindrome";

return 0;
}


