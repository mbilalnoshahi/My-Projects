#include <iostream>
using namespace std;

  struct node
        {
           node* left;
           node* right;
           int data;
        };
class Binary_Search
{
    private:
        node* root;   
    public:
        Binary_Search()
        {
           root = NULL;
        }
        bool is_empty() const 
		{
		 return root==NULL;
		}
		
void display_inorder()
{
  in_order(root);
}
void in_order(node* a)
{
    if(a != NULL)
    {
        if(a->left) 
		in_order(a->left);
        cout<<" "<<a->data<<" ";
        if(a->right) 
		in_order(a->right);
    }
    else return;
}
        void display_preorder()
        {
    pre_order(root);
}
void pre_order(node* b)
{
    if(b != NULL)
    {
        cout<<" "<<b->data<<" ";
		if(b->left)
		pre_order(b->left);
        if(b->right) 
		pre_order(b->right);
    }
    else return;
}       
        void display_postorder()
        {
    post_order(root);
}

void post_order(node* c)
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
     void insert(int num)
{
    node* n=new node;
    node* parent;
    n->data=num;
    n->left=NULL;
    n->right=NULL;
    parent=NULL;
    
    if(is_empty()) root=n;
    else
    {   
        node* current;
        current=root;
        while(current)
        {
            parent=current;
            if(n->data > current->data) 
			current=current->right;
            else 
			current=current->left;
        }
   if(n->data < parent->data)
           parent->left = n;
        else
           parent->right = n;
    }
}

void delet(int num2)
{
    bool found=false;
    if(is_empty())
    {
        cout<<endl<<endl<<" Tree is Empty...... "<<endl<<endl;
        return;
    }   
    node* current;
    node* parent;
    current=root;
    while(current!=NULL)
    {
         if(current->data==num2)
         {
            found=true;
            break;
         }
         else
         {
             parent=current;
             if(num2>current->data) 
			 current=current->right;
             else 
			 current=current->left;
         }
    }
    if(!found)
		 {
        cout<<endl<<endl<<" Data is not found in this Tree..... "<<endl<<endl;
        return;
    }
if((current->left==NULL && current->right!=NULL) || (current->left!=NULL
&& current->right==NULL))
    {
       if(current->left==NULL && current->right!=NULL)
       {
           if(parent->left==current)
           {
             parent->left=current->right;
             delete current;
           }
           else
           {
             parent->right=current->right;
             delete current;
           }
       }
       else 
       {
          if(parent->left==current)
           {
             parent->left=current->left;
             delete current;
           }
           else
           {
             parent->right=current->left;
             delete current;
           }
       }
     return;
    }

		 if( current->left==NULL && current->right==NULL)
    {
        if(parent->left==current) 
		parent->left=NULL;
        else 
		parent->right=NULL;
		delete current;
		return;
    }
    if (current->left!=NULL && current->right!=NULL)
    {
        node* temp;
        temp=current->right;
        if((temp->left==NULL) && (temp->right==NULL))
        {
            current=temp;
            delete temp;
            current->right=NULL;
        }
        else
        {
            if((current->right)->left!=NULL)
            {
                node* temp2;
                node* temp3;
                temp2=(current->right)->left;
                temp3=current->right;
                while(temp2->left!=NULL)
                {
                   temp3=temp2;
                   temp2=temp2->left;
                }
		current->data=temp2->data;
                delete temp2;
                temp3->left=NULL;
           }
           else
           {
               node* temp4;
               temp4=current->right;
               current->data=temp4->data;
	       current->right=temp4->right;
               delete temp4;
           }

        }
		 return;
    }
}
};
int main()
{
    Binary_Search tree;
    int choice,t1,t2;
    cout<<endl<<endl<<"\t__________WELCOME HERE IN BINARY SEARCH TREE OPERATIONS__________"<<endl<<endl;
    while(1)
    {
       cout<<endl<<" Binary Search Tree Operations "<<endl;
       cout<<" ----------------------------- "<<endl;
       cout<<"Please select any option from the following??"<<endl;
       cout<<" 1. Insertion "<<endl;
       cout<<" 2. In-Order Traversal "<<endl;
       cout<<" 3. Pre-Order Traversal "<<endl;
       cout<<" 4. Post-Order Traversal "<<endl;
       cout<<" 5. Deletion "<<endl;
       cout<<" 6. Exit "<<endl;
       cout<<endl<<" Now Enter your choice= "<<endl;
       cin>>choice;
       switch(choice)
       {
           case 1 : 
		            cout<<endl<<" Enter Number to be Inserted= "<<endl;
                    cin>>t1;
                    tree.insert(t1);
                    break;
           case 2 : 
                    cout<<" In-Order Traversal "<<endl;
                    cout<<endl<<" -------------------"<<endl;
                    tree.display_inorder();
                    break;
           case 3 : 
                    cout<<" Pre-Order Traversal "<<endl;
                    cout<<endl<<" -------------------"<<endl;
                    tree.display_preorder();
                    break;
           case 4 : 
                    cout<<" Post-Order Traversal "<<endl;
                    cout<<endl<<" --------------------"<<endl;
                    tree.display_postorder();
                    break;
           case 5 : cout<<" Enter value that you want to delete= "<<endl;
                    cin>>t2;
                    tree.delet(t2);
                    break;
           case 6 : 
                    return 0;               
       }
    }
}
