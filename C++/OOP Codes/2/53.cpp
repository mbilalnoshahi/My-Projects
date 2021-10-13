#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Bilal{
	int x,y;
	public:
		Bilal()
		{
			x=0;
			y=0;
		}
		Bilal(int s,int d)
		{
			x=s;
			y=d;
		}
		void display()
		{
		
	 try{
       
      if(y==0)
	  {
	   throw 'y';
	    }
      else if( 1)
	  {
	   throw x;
	    }
      else if(2)
	  {
	   throw 1.0;
	   }
      else if(3)
	  {
	   throw "Hello";
	   }
      
      cout << "\nEnd of try-block.";
   }
      catch(char c)
	  {
	   cout << "caught a char: " << c;
	    }
      catch(int i)
	  {
	   cout << "caught an int: " << i;
	    }
      catch(double d)
	  {
	   cout << "caught a double: " << d;
	   }
      catch(const char* s)
	  {
	   cout << "constant..."<<s;
	   }
   
	}
};
int main() {
	Bilal b1(4,0);
	b1.display();
	return 0;
}
