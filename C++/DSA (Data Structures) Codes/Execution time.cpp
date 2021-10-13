#include <bits/stdc++.h> 
using namespace std; 
  
// A sample function whose time taken to 
// be measured 
void swap(string &a,string &b)                      //Start Swapping
{ 
    string temp=a; 
    a=b; 
    b=temp; 
} 
int main() 
{

string a,b; 
    /* Time function returns the time since the  
        Epoch(jan 1 1970). Returned time is in seconds. */
    time_t start, end; 
  
    /* You can call it like this : start = time(NULL); 
     in both the way start contain total time in seconds  
     since the Epoch. */
    time(&start); 
  
    // unsync the I/O of C and C++. 
    ios_base::sync_with_stdio(false); 
  
    swap(a,b);                      //Start Swapping

    // Recording end time. 
    time(&end); 
  
    // Calculating total time taken by the program. 
    double time_taken = double(end - start);

    time_taken *= 1e-9; 
  
    
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(100000); 
    cout << " sec " << endl; 
    return 0; 
} 

