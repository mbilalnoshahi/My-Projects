#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int&x,int&y)
{
	int z;
	z = x;
	x = y;
	y = z;

	
}
int main() {
	int x,y;
	cout << "Plz Input First Value= " << endl;
	cin >> x;
	cout << "Plz Input Second Value= " << endl;
	cin >> y;
	swap ( x , y );
	cout << x << y << endl;
	return 0;
}
