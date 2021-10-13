#include <iostream>
using namespace std;

int main ()
 {

int min,max,pma,pmi;
int Numb=7;
int a[Numb]; 
cout<<"Enter 7 values= "<<endl;
for(int i=0;i<7;i++)
{
cin>> a[i];
}
min=a[0];
max=a[0];
for(int i=1;i<7;i++)
{
if(min>a[i])
{
min=a[i];
pmi=i;
}
else if(max<a[i+1])
{
max=a[i+1];
pma=i+1;			
}
}
cout<<"Maximum number is= "<<max<<endl<<"And Location= "<<pma<<endl;
cout<<"Minimum number is= "<<min<<endl<<"And Location= "<<pmi<<endl;
cout<<endl<<"...........Swapping Numbers........"<<endl;
cout<<endl<<"now for max= "<<min<<endl;
cout<<endl<<"And for min= "<<max<<endl;
return 0;
}
