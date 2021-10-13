#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(4);
	v[0]=6;
	v[1]=9;
	v[2]=34;
	v[3]=56;
	cout<<v.front()<<endl;
	cout<<v.at(3)<<endl;
	v.push_back(890);
	cout<<v.front()<<endl; 
	return 0;
	
}
