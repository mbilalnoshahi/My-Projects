#include <iostream>
using namespace std;

int main() {
    int a[6];
    int x=0;
    int even[]={};

    for (int i=0; i < 6; i++) {
        cin >> a[i];
    }

    cout << " " << endl;

    for (int i=0; i < 6; i++) {
        if (a[i] % 2 == 0) {
        	++x;
            
        }
       
    }
     if (x % 2 == 0)
     cout << "True" <<endl << x <<endl;
        else 
        cout<<"False"<<endl;

    return 0;
}
