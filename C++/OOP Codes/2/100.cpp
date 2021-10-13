#include<iostream>
using namespace std;
#include<cstring>
#include<fstream>
// info datatype to information about color , size ..etc of node and edge 
struct info{
	
		char fcolor[30];
	int fsize;
	char arrowhead[30];
	float arrowsize;
	
};

//node class 
class node{
	
	protected:
	int no;
	char n[30];
	
	
	public:
		// to insert node number and name
	void node_insert()
	{
		
		
		cout<<" \n enter node number and name  : ";
		
		cout<<" \n number : ";
		cin>>no;
		cout<<" \nname : ";
		cin.ignore();
		cin.getline(n,29);
		
		if(record_node()==1)
		{
			cout<<" inserted successfully ";
		}
		
		
		else {
			
			cout<<" error";
			
		}
		
		
		
	}
		//following function call in insert function to insert data in file
		int record_node(){
			
			ofstream fout;
			fout.open("kme1.dat",ios::app|ios::binary);
			fout.write((char *)this, sizeof(*this));
	
	fout.close();
	return 1;
		}
		
// to display the data of node ,call in node display function
   void show_node ( )
   {
   	
   	cout<<no<<"[ label = \""<<n<<"\" ] ;\n";
   	
	   }	
	   //read data from file and call show_node to display data
	void node_display ( )
	{
		
 ifstream fin;
	fin.open("kme1.dat",ios::app|ios::binary);
			fin.read((char *)this, sizeof(*this));
while(!fin.eof())
	{
		show_node( );
		fin.read((char *)this, sizeof(*this));
			}		
	}
	
	
};

//Edge class for insertion and displaying the data of edge 
class Edge{
	protected:
	int n1;
	int n2;
int w;
	
	
	public:
		// to insert edge number and name
	void edge_insert()
	{
		
		
		cout<<" \n enter  data : ";
		
		cout<<" \n first node : ";
		cin>>n1;
		cout<<" \n 2nd node : ";
	
	cin>>n2;
	cout<<" \n edge weight : ";
	cin>>w;
	
		
		if(record_edge()==1)
		{
			cout<<" inserted successfully ";
		}
		
		
		else {
			
			cout<<" error";
			
		}
		
		
		
	}
			//following function call in insert function to insert data in file
		int record_edge(){
			
			ofstream fout;
			fout.open("kme.dat",ios::app|ios::binary);
			fout.write((char *)this, sizeof(*this));
	
	fout.close();
	return 1;
		}
		
// to display the data of edge, call in node display function
   void show_edge ( )
   {
   	
   	cout<<n1<<"--> "<<n2<<"[ label = "<<w<<"] ; \n";
   	
	   }
	   	//read data from file and call show_node to display data
	void edge_display ( )
	{
		
 ifstream fin;
	fin.open("kme.dat",ios::app|ios::binary);
			fin.read((char *)this, sizeof(*this));
	while(!fin.eof())
	{
		show_edge( );
		fin.read((char *)this, sizeof(*this));
			}		
	}
	
	
};

//derive class from node class and edge class
class graph:public  node, public  Edge {
// declaring variable of info type 
info edge_info;
info node_info;
	
	public:
		//For  node and eedge color size ......
		void get_graph_info( )
		{
			cout<<" \nEnter info about graph : ";
			cout<<" \n For Node : ";
			cout<<"\n  font color of node : ";
			cin.ignore();
			cin.getline(node_info.fcolor,29);
				cout<<" \n  font size of node : ";
				cin>>node_info.fsize;
				cout<<" \n for Edge : ";
					cout<<"\n   font size of edge : ";
			cin>>edge_info.fsize;
			cin.ignore();
				cout<<"\n   arrow head   : ";
					cin.getline(edge_info.arrowhead,29);
			
			
				cout<<" \n arrow size  : ";
				cin>>edge_info.arrowsize;
				
				
			
		}
		
		
	void	display_graph_info( )
		{
			
	cout<<"\n node [ fontcolor = "<<node_info.fcolor<<" ,  fontsize = "<<node_info.fsize<<" ,";
				cout<<"\n edge [ fontsize= "<<edge_info.fsize<<"  arrowhead = "<<edge_info.arrowhead<<" , arrowsize = "<<edge_info.arrowsize<<" ;";	
		}
		//function calling all insertion funtion of its base classes
		
	void  builtgraph()
	{
		
	system( "cls");
	cout<<" \n \n \t **************  G R A P H V I Z     W R I T T E R ***************\n\n";
	 
		
		int x, y;
		cout<<" \n Enter no of nodes and edges : \n ";
		cin>>x>>y;
		system("cls");
		cout<<" \n \n \t **************  G R A P H V I Z     W R I T T E R ***************\n\n";
		for(int i=0;i<x;i++)
		{
		
	 node_insert();
}
system("cls");
cout<<" \n \n \t **************  G R A P H V I Z     W R I T T E R ***************\n\n";
for(int i=0;i<y;i++)
	 edge_insert();
		
	}
	//calling all display function of its base classes and also graph info function 
	
void graph_display( )	 
	{
		system("cls");
		
		cout<<" \n \n \t **************  G R A P H V I Z     W R I T T E R ***************\n\n";
		
		get_graph_info( );
			system("cls");
		
		cout<<" \n \n \t **************  G R A P H V I Z     W R I T T E R ***************\n\n";
		cout<<"\n digraph { \n\n graph[]";
	
display_graph_info( );
cout<<"1 [label =\"A\" ] ;\n";  
node_display ( );

edge_display ( );		
		cout<<"}";
	}
};

int main ( )
{
	
	// creating object of class graph
graph o;  	
int g=0;
do {
	system("cls");
	int ch;
		cout<<" \n Enter 1 for insertion : ";
	cout<<" \n Enter 2 for display : ";
	cout<<" \n enter choice : ";
	cin>>ch;
	switch(ch )
	{
		case 1:
		o.builtgraph();
			break;
			case 2:
				o.graph_display();
			break;
			deafualt:
				cout<<" \n enter valid choice : ";
				
		
		
	}
	cout<<"\n enter 0 to continue : ";
	cin>>g;
}

while(g==0);
}
