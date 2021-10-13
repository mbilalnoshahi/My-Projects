#include <iostream>
#include "Timer.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int frequency_of_primes (int size) {
  int i,j;
  int n = size;
  int freq=n-1;
  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
  return freq;
}

int frequency_of_primes2 (int size) {
  int i,j;
  int n = size;
  int freq=n-1;
  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
  return freq;
}


int main()
{
    int i=0, g, g2;
    int size = 1e6;
    Timer Freq1_Time("Function1 Time"), Freq2_Time("Function2 Time");

    cout << "C++ source file" << endl;

    for(i=0;i<size;i++); //some dummy delay

    Freq1_Time.Start();
    g = frequency_of_primes (size);
    Freq1_Time.Stop();
    

    Freq2_Time.Start();
    g2 = frequency_of_primes2 (size);
    Freq2_Time.Stop();

    for(i=0;i<size;i++); //some dummy delay

    cout << "Freq1: " << g << endl;
    cout << "Freq2: " << g2 << endl;

    Freq1_Time.Print();
    Freq2_Time.Print();

    return 0;
}