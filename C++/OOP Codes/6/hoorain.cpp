#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct info{
	
	char fcolor[30];
	int fsize;
	char arrowhead[30];
	float arrowsize;
	};
class node
{
	protected:
	char n[20];
	int num;
	public:
		void set_valueofnode()
		{
			int x;
			cout<<"enter number of nodes: "<<endl;
			cin>>x;
			for(int i=0;i<x;i++)
			{
			
			cout<<"enter the name of a node:"<<endl;
			cin>>n ;
			cout<<"enter the number of a node:"<<endl;
			cin>>num;
					}
				}
					void display_value()
					
					{
						cout<<"\n \n digraph { \n \n graph[]"<<endl;
						cout<<endl<<num<<"[ label = \""<<n<<"\" ] ;\n";
					}
					
};



class edge
{
	protected:
	int n1;
	int n2;
    int w;
	public:
		void set_valuesofedges()
		{
			int y;
			cout<<"enter number of edges: "<<endl;
			cin>>y;
			for(int j=0;j<y;j++)
			{
			
			cout<<"enter the source node: "<<endl;
			cin>>n1;
			cout<<"enter the destination node : "<<endl;
			cin>>n2;
			cout<<"weight"<<endl;
			cin>>w;
			}		}
					void display_values()
					{
						cout<<n1<<"--> "<<n2<<"[ label = "<<w<<"] ; \n";
					}
};
class graph:public node,public edge
{
	info edge_info;
info node_info;
int n,e;
public:
	graph()
	{
		n=0;
		e=0;
	}
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

			{
					cout<<"\n node [ fontcolor = "<<node_info.fcolor<<" ,  fontsize = "<<node_info.fsize<<" ,";
				cout<<"\n edge [ fontsize= "<<edge_info.fsize<<"  arrowhead = "<<edge_info.arrowhead<<" , arrowsize = "<<edge_info.arrowsize<<" ];"<<endl<<"}";	
			}
			

		}

	void graph_display( )	 
	{
			system("cls");
		cout<<" \n \n \t **************  G R A P H V I Z     W R I T T E R ***************\n\n";
		cout<<"\n digraph { \n\n graph[]";
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
			
            o.set_valueofnode();
            o.set_valuesofedges();
		    o.get_graph_info();
			break;
			case 2:
			    o.display_value();
				o.display_values();
				o.display_graph_info();


					
				
			break;
			default:
				cout<<" \n enter valid choice : ";
				
		
		
	}
	cout<<"\n enter 0 to continue : ";
	cin>>g;
}
while(g==0);


	ofstream fout;
fout.open("sehar1.txt");
if (fout.is_open())
{
fout.write((char*)&o,sizeof(o));
fout.close();
}


}


