#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class node{
	private:
		string fontcolor;
		int fontsize;
		public:
		
			void print_node()
			{
				cout<<"Font_Color of Node= "<<fontcolor<<endl;
				cout<<"Font_Size of Node= "<<fontsize<<endl;
		}
		void set_node()
		{
			cout<<"Please enter fontcolor= "<<endl;
			cin>>fontcolor;
			cout<<"Please enter font size= "<<endl;
			cin>>fontsize;
		}
			friend class graph;
			
};
class edge{
	protected:
		int font_size,arrowsize;
		string arrowhead;
		public:
			
			void print_edge()
			{
				cout<<"Font_Size of Edge= "<<font_size<<endl;
				cout<<"Arrow_Head of Edge= "<<arrowhead<<endl;
				cout<<"Arrow_Size of Edge= "<<arrowsize<<endl;
			}
			void set_edge()
			{
				cout<<"Font_Size of Edge= "<<font_size<<endl;
				cout<<"Arrow_Head of Edge= "<<arrowhead<<endl;
				cout<<"Arrow_Size of Edge= "<<arrowsize<<endl;
			}
	
};
class graph:public node,public edge
{
	public:
		void set_graph()
		{
		
		void set_node();
		void set_edge();
	}
		
}; 
int main() {
	graph p;
	p.set_node();
	p.set_edge();

}
