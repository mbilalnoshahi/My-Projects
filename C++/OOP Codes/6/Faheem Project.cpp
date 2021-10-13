#include<iostream>
#include<fstream>
using namespace std;
class nodes{
 int node_num;
 string node_name;
  public:
   nodes()
   {
   node_num=0;
   node_name="\0";
   }
   nodes(int node_n,string node_nam)
   {
   node_num=node_n;
   node_name=node_nam;
    
   }
   void set_node()
   {
    cout<<"enter node number,name:";
    cin>>node_num;
    cin>>node_name;
   }
   void get_node()
   {
    //nodes(int no,string name)
    cout<<"\nnode number:"<<node_num;
    cout<<"\nnode name:"<<node_name;
   }
   friend class edges;
   //friend class graph;
};
class edges{
 int weight;
 nodes x1;
 nodes x2;
  public:
   edges()
   {
    x1=nodes();
    x2=nodes();
    weight=0;
   }
   void set_edge()
   {
    x1.set_node();
    x2.set_node();
    cin>>weight;
   }
   void get_edge()
   {
    x1.get_node();
    x2.get_node();
    cout<<'\n'<<weight;
    
   }
   friend class graph;
   
};
class graph{
 edges e;
 edges e1;
  public:
   graph()
   {
    e=edges();
    e1=edges();
   }
   graph(edges a1,edges a2)
   {
    e=a1;
    e1=a2;
 
   }
   void set_graph()
   {
    e.set_edge();
    e1.set_edge();
   }
   
};
int main()
{
 
 
 
 
 
 ofstream g_file;
 g_file.open("graph_oop.txt");
 g_file<<"digraph { \n\tgraph[]; \n\tnode [fontcolor=black, fontsize=28]; \n\tedge [fontsize=30, arrowhead=vee, arrowsize=0.5];";
 g_file.close();
 
 
/*nodes n,n1;
edges e1;
//e1.set_edge();
//e1.get_edge();
//edges e2;
//e2.
graph g1;
g1.set_graph();
*/
nodes f;
edges e1;
ifstream infile; 
infile.open("graph.txt", ios::in | ios::binary);
infile.seekg(0, ios::end);     
int endposition = infile.tellg();
int n = endposition / sizeof(nodes); 
cout << "\nThere are " << n << " nodes in file";
cout << "\nEnter node number: ";
cin >> n; 
int position = (n-1) * sizeof(nodes);  
infile.seekg(position);  
infile.read( reinterpret_cast<char*>(&f), sizeof(f) );
 f.get_node();
 cout << endl;
 
 
 
 
 
 
  return 0; }
