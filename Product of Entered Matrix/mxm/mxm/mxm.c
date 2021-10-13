#include <stdio.h>
 
const int size = 5;

int main()
{
  int c, d, k, sum = 0;
  int first[size][size], second[size][size], multiply[size][size];
 

//  random elements of first matrix\n
 
  for (  c = 0 ; c < size ; c++ )
    for ( d = 0 ; d < size ; d++ )
      first[c][d] = c + d;
 
//  random elements of second matrix
 
    for ( c = 0 ; c < size ; c++ )
      for ( d = 0 ; d < size ; d++ )
        second[c][d] = c *c ;
 
//  multiplication matrix initialization with zero

    for ( c = 0 ; c < size ; c++ )
      for ( d = 0 ; d < size ; d++ )
        multiply[c][d] = 0;

  
    for ( c = 0 ; c < size ; c++ )
    {
      for ( d = 0 ; d < size ; d++ )
      {
        for ( k = 0 ; k < size ; k++ )
        {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for ( c = 0 ; c < size ; c++ )
    {
      for ( d = 0 ; d < size ; d++ )
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  
  return 0;
}