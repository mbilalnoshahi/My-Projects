#include <iostream> 
using namespace std;
void selectionSort( int * const, const int ); 
void swap( int * const, int * const ); 
int main()
{
   const int arraySize = 8;
   int a[ arraySize ] = { 3, 0, -5, 9, 22, 0, 14, 7 };
   selectionSort( a, arraySize ); 
   cout << "Integers in ascending order\n";
   for ( int j = 0; j < arraySize; j++ )
      cout << setw( 4 ) << a[ j ];
   cout << endl;
   return 0; 
   } 
void selectionSort( int * const array, const int size )
{
   int smallest; 
   for ( int i = 0; i < size - 1; i++ )
   {
      smallest = i;
      for ( int index = i + 1; index < size; index++ )
         if ( array[ index ] < array[ smallest ] )
            smallest = index;
      swap( &array[ i ], &array[ smallest ] );
   } 
} 
void swap( int * const x, int * const y )
{
   int temp = *x;
   *x = *y;
   *y = temp;
}
