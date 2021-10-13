#include <iostream>
int pointer;    
using namespace std;
template <class T>
  T find(T f1[10], T n1)  
  {        
     T t2;    
     for(int i=0; i<70; i++)    
    {       
     if( f1[i]==n1)    
    {
     pointer=t2+1; 
    return 1;
  }
   else
   return 0; 
   }
 }
   int main()
 { 
    int s1[10],n2;
    int n3;  
    cout<<"\nplease enter size of array:";
     cin>>n3;
   cout<<"\nplease enter elements:";
     for(int i=0; i<n3; i++)
     cin>>s1[i];
     cout<<"\nplease enter number for searching:"<<endl;
     cin>>n2;
     for(int pointer=0;pointer<n3;pointer++)    
    {
     if(s1[pointer]==n2)
    {
  cout<<"position of element:"<<pointer<<endl;
 }
  }
  if(s1[pointer]=!n2)
 {
  cout<<"not found! "<<endl;
  }
return 0;
}

