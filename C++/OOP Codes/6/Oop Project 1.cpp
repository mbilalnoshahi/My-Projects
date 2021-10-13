#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class graph{
	protected:
		string label;
};
class node:public graph{
	private:
		string fontcolor;
		int fontsize;
		public:
		
			void print()
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
class edge:public graph{
	private:
		int font_size,arrowsize;
		string arrowhead;
		public:
			
			void print()
			{
				cout<<"Font_Size of Edge= "<<font_size<<endl;
				cout<<"Arrow_Head of Edge= "<<arrowhead<<endl;
				cout<<"Arrow_Size of Edge= "<<arrowsize<<endl;
			}
			friend class graph;
}; 
int main() {
	node n1;
	n1.set_node();
	n1.print();
	

}
