#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
using namespace std;
class node{
	protected:
		int a;
		int num,i;
		char node_name[20];
		public:
			void print_node()
			{
				try{
				if(num!=0)
				{			
				cout<<"\n \n digraph { \n \n graph[]"<<endl;			
		cout<<num<<"[ label = \""<<node_name<<"\" ] ;"<<endl;
	}	
	else 
	throw num;
}
	catch(int k)
	{
		cout<<"Exception...."<<endl;
	}
}
		void set_node()
		{
		cout<<"Enter no of nodes= "<<endl;
		cin>>a;
		for(int i=0;i<a;i++)
			{
			cout<<"Please Enter Node Number= "<<endl;
			cin>>num;
			cout<<"Please Enter Node Name= "<<endl;
			cin.ignore();
			cin.getline(node_name,30);
	     }    
		}
};
class edge{
	protected:
		int e1,e2,w,b;
		public:
			void print_edge()
			{	
			try
			{
				if(e1==0)
				{
				throw e1;
			}
				else if (e2==0)
				{
				throw e2;
			}
				else if(w==0)
				{				
				throw w;
	}
				else
   	cout<<e1<<"--> "<<e2<<"[ label = "<<w<<"] ; "<<endl;
}
catch(...)
{
	cout<<"Exception......"<<endl;
}
}
			void set_edge()
			{
				cout<<"Please Enter Number of Edges= "<<endl;
				cin>>b;
				for(int i=0;i<b;i++)
				{		
				cout<<"First Node= "<<endl;
				cin>>e1;
				cout<<"Second Node= "<<endl;
				cin>>e2;
				cout<<"Edge Weight= "<<endl;
				cin>>w;	
         }
   }
};
class graph:public node,public edge
{
	private:
		int font_size,arrowsize,fontsize;
		char arrowhead[30];
		char fontcolor[30];
	public:
		friend class node;
		friend class edge;
	 friend ostream & operator << (ostream &out, const graph &t); 
    friend istream & operator >> (istream &in,  graph &t);

};
ostream & operator << (ostream &out, const graph &t) 
{
    out << "\n Node [Font Color = "<<t.fontcolor<<" , Font Size = "<<t.fontsize<<" ];"<<endl;
	out <<" \n Edge [Font Size = "<<t.font_size<<"Arrow Head = "<<t.arrowhead<<" , Arrow Size = "<<t.arrowsize<<" ];"<<endl; 
	out<<"}";
    return out; 
} 
istream & operator >> (istream &in,  graph &t) 
{
	cout<<"Font Color= "<<endl;
	cin.ignore();
	cin.getline(t.fontcolor,30); 
cout<<"Please Enter Font size of Node= "<<endl;   
 in>>t.fontsize;
     cout <<"Enter font size of Edge= "<<endl; 	
	 in>>t.font_size; 
    cout <<"Enter Arrow Size= "<<endl;
	 in>>	t.arrowsize;
	cout<<"Enter Arrow Head= "<<endl;
	cin.ignore();
	cin.getline(t.arrowhead,30);
    return in; 
}  
int main() {
cout<<"***************************"<<endl<<endl;
cout<<"Welcome to Graph Writer in C++...."<<endl<<endl;
cout<<"***************************"<<endl<<endl;	
graph B;
int p=0,f;
do {
	int z;
	cout<<"Enter 1 for input values : "<<endl;
	cout<<"Enter 2 for display values : "<<endl;
	cout<<" Please Enter your choice : "<<endl;
	cin>>z;
	switch(z )
	{
		case 1:
		B.set_node();
		B.set_edge();
	cin>>B;
			break;
			case 2:
	B.print_node();
	B.print_edge();
	cout<<B;
			break;		
	}
	cout<<"Please Enter '7' to continue : "<<endl;
	cin>>p;
}
while(p==7);
ofstream fout;
	B.set_node();
		B.set_edge();
		cin>>B;
fout.open("Bilal2.txt");
fout.write((char*)&B,sizeof(B));
fout.close();
   return 0;
}
