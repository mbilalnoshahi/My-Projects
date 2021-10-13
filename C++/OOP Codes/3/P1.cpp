#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class node{
	private:
		string fontcolor;
		int fontsize;
		int num;
		string node_name;
		public:
		
			void print_node()
			{
				cout<<"Font_Color of Node= "<<fontcolor<<endl;
				cout<<"Font_Size of Node= "<<fontsize<<endl;
				cout<<"Node Number= "<<num<<endl;
				cout<<"Node Name= "<<node_name<<endl;
		}
		void set_node()
		{
			cout<<"Please enter fontcolor= "<<endl;
			cin>>fontcolor;
			cout<<"Please enter font size= "<<endl;
			cin>>fontsize;
			cout<<"Please Enter Node Number= "<<endl;
			cin>>num;
			cout<<"Please Enter Node Name= "<<endl;
			cin>>node_name;
		}
};
class edge{
	protected:
		int font_size,arrowsize;
		string arrowhead;
		int n1,n2,w;
		public:
			
			void print_edge()
			{
				cout<<"Font_Size of Edge= "<<font_size<<endl;
				cout<<"Arrow_Head of Edge= "<<arrowhead<<endl;
				cout<<"Arrow_Size of Edge= "<<arrowsize<<endl;
				cout<<"First node= "<<n1<<endl;
				cout<<"Second Node= "<<n2<<endl;
				cout<<"Edge Weight= "<<w<<endl;
			}
			void set_edge()
			{
				cout<<"Font_Size of Edge= "<<font_size<<endl;
				cout<<"Arrow_Head of Edge= "<<arrowhead<<endl;
				cout<<"Arrow_Size of Edge= "<<arrowsize<<endl;
				cout<<"First Node= "<<n1<<endl;
				cout<<"Second Node= "<<n2<<endl;
				cout<<"Edge Weight= "<<w<<endl;
			}
	
};
class graph:public node,public edge
{
	public:
		
		void set_node();
		void set_edge();
		
		
}; 
int main() {
	graph p;
	p.set_node();
	p.set_edge();
    return 0;

}
