#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
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
		cin.getline(n,30);
		
		
		
		
	}
		//following function call in insert function to insert data in file
	
		
// to display the data of node ,call in node display function
   void show_node ( )
   {
   	
   	cout<<no<<"[ label = \""<<n<<"\" ] ;\n";
   	
	   }	
	   //read data from file and call show_node to display data
	
	
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
	
		
		
		
		
	}
			//following function call in insert function to insert data in file
// to display the data of edge, call in node display function
   void show_edge ( )
   {
   	
   	cout<<n1<<"--> "<<n2<<"[ label = "<<w<<"] ; \n";
   	
	   }
	   	//read data from file and call show_node to display data
	
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
				cout<<"\n edge [ fontcolor = "<<"  arrowhead = "<<edge_info.arrowhead<<" , arrowsize = "<<edge_info.arrowsize<<" ;";	
		}
		//function calling all insertion funtion of its base classes
		
	void  builtgraph()
	{
		
	system( "cls");
	cout<<" \n \n \t ************  G R A P H V I Z     W R I T T E R ***************\n\n";
	 
		
		int x, y;
		cout<<" \n Enter no of nodes and edges : \n ";
		cin>>x>>y;
		system("cls");
		cout<<" \n \n \t ************  G R A P H V I Z     W R I T T E R ***************\n\n";
		for(int i=0;i<2;i++)
		{
		
	 node_insert();
}
system("cls");
cout<<" \n \n \t ************  G R A P H V I Z     W R I T T E R ***************\n\n";
for(int i=0;i<2;i++)
	 edge_insert();
		
	}
	//calling all display function of its base classes and also graph info function 
	
void graph_display( )	 
	{
		system("cls");
		
		cout<<" \n \n \t ************  G R A P H V I Z     W R I T T E R ***************\n\n";
		
		get_graph_info( );
			system("cls");
}
};

int main ( )
{
	graph p;
		p.builtgraph();
	p.graph_display();
	p.display_graph_info();
	cout<<endl;
	p.show_edge();
			
			ofstream fout;
			fout.open("graph.txt");
			fout.write((char *)&p, sizeof(p));
	fout.close();		
 ifstream fin;
	fin.open("graph.txt");
			fin.read((char *)&p, sizeof(p));
fin.close();			

return 0;
}
