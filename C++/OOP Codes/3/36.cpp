#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
	  string f;
	  ofstream fout;
	 fout.open("Pak.txt");
	if (fout.is_open() )
{
		
		while(fout)
		{
			getline(cin,f);
			if (f=="0")
			break;

			fout<<f<<endl;
	 }

		fout.close();
	}
}
