#include <iostream>
using namespace std; 


int stack[30], n=30, top=-1;

void push(int val) {
   if(top>=n-1)
      cout<<"Stack is Full.."<<endl; 
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
      cout<<"Stack is Empty"<<endl;
   else {
      cout<<"The popped element is= "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are= ";
      for(int i=top; i>=0; i--)
         cout<<stack[i]<<" ";
         cout<<endl;
   } else
      cout<<"Stack is Empty...";
}

int main() {
   int choice, val; 
   cout<<"1- Push in stack"<<endl;
   cout<<"2- Pop from stack"<<endl;
   cout<<"3- Display stack"<<endl;
   cout<<"0- To Exit"<<endl;
 
   do {
      cout<<"Enter choice= "<<endl;
      cin>>choice;
      switch(choice) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 0: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(choice!=0); 
      return 0;
}
