#include <iostream>
using namespace std;
 
int main () {
   // an array with 5 rows and 2 columns.
   int a[5][2];
   cout<<"Value= "<<endl;
   
 
   // output each array element's value                      
   for ( int i = 0; i < 5; i++ )
   cin><
      for ( int j = 0; j < 2; j++ ) {
      
         cout << "a[" << i << "][" << j << "]: ";
         cout << a[i][j]<< endl;
      }
 
   return 0;
}
