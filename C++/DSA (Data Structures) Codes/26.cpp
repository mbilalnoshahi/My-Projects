#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int vertex[50][50];
int counter=0;

void display_Matrix(int v)
{
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			cout<<vertex[i][j]<<" ";
		}
		cout<<endl;
		
	}
}

void add_edge(int u,int v)
{
	vertex[u][v]=1;
	vertex[v][u]=1;   
}

int main() {
cout<<endl<<endl<<"\t.....Assalamoalaikum....."<<endl<<endl;
cout<<endl<<endl<<"\t.....Welcome by Bilal in C++ Programming....."<<endl<<endl;
cout<<endl<<endl<<"\t.....Here You can see values of the graph in the form of Matrix....."<<endl<<endl;
cout<<endl<<endl<<"\t.....So don't waste your time and move forward....."<<endl<<endl;	
	
	int vertex;
	cout<<endl<<endl<<"Please Enter the Number of vertices= "<<endl<<endl;
	cin>>vertex;
	add_edge(0,2);
	add_edge(2,3);
	add_edge(1,2);
	add_edge(3,4);
	add_edge(1,5);
	add_edge(4,3);
	add_edge(1,5);
	add_edge(5,2);
    display_Matrix(vertex);
	return 0;
}

