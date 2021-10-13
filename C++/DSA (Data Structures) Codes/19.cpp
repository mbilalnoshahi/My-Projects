#include <iostream>
#include <vector>
#include "Timer.h"
int N=10000;
using namespace std;
void bubblesort(int Array[])
{
for(int x=0;x<N-1;x++)
	{
		for(int y=0;y<(N-1);y++)
		{
			if(Array[x]>Array[y])
		    	{
			     swap(Array[x],Array[y]);
		    	}
		}
	}
}
void bubblesortmodified(int Array[])
{
	int flag ;
    for(int x=0;x<N-1;x++)
	{   
	    flag =0;
		for(int y=0;y<N-x;y++)
		{
			if(Array[x]>Array[y])
		    	{
			     swap(Array[x],Array[y]);
		    	}
		    	flag=1;
		    	break;
		}
	}
}


int main()
{
    Timer aTimer("BORTTime"), vTimer("Vector Time");
    int * Array = (int *) malloc(N * sizeof(int) );
	for (int i =0;i<N;++i)
	{
		Array[i]=i;
	}
    aTimer.Start();
	bubblesort(Array);
    aTimer.Stop();
     vTimer.Start();
     bubblesortmodified(Array);
         vTimer.Stop();
    free(Array);

    aTimer.Print();
  vTimer.Print();

    return 0;
}
