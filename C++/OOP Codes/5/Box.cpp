#include <iostream>
using namespace std;

class Box {
	double len , wid , br , V;
	public:
		Box ();
		
		Box ( double l , double w , double b );
		
		
 Box operator + ( const Box & x )
  {
  	Box y;
 	y.len = len + x.len;
 	y.wid=wid + x.wid;
 	y.br=br + x.br;
    return y;                                                                                                                                                                                 
 }
 Box operator * ( const Box & x )
  {
  	Box y;
 	y.len = len * x.len;
 	y.wid=wid * x.wid;
 	y.br=br * x.br;
    return y;                                                                                                                                                                                 
 }
 Box operator / ( const Box & x )
  {
  	Box y;
 	y.len = len / x.len;
 	y.wid=wid / x.wid;
 	y.br=br / x.br;
    return y;                                                                                                                                                                                 
 }
 Box operator - ( const Box & x )
  {
  	Box y;
 	y.len = len - x.len;
 	y.wid=wid - x.wid;
 	y.br=br - x.br;
    return y;                                                                                                                                                                                 
 }
	void print();
	
};

Box :: Box()

	{
			len=0;
			wid=0;
			br=0;
		}
		
	Box::Box ( double l , double w , double b )
			{
			len=l;
			wid=w;
			br=b;		
	}
	
void Box:: print()
		{
		V=len*wid*br;
		cout<<"Volume= "<<V<<endl;
	}

int main()
{
	Box m ( 1 , 2 , 3 );
	Box p ( 3 , 6 , 8 );
	Box n;
	n = m + p;
	n.print();
	n = m * p;
	n.print();
	n = m / p;
	n.print();
	n = m - p;
	n.print();
	return 0;
}
