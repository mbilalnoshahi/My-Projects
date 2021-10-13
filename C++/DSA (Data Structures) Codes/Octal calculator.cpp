#include <iostream> 
using namespace std; 
  
// function to convert decimal to octal 


bool check_octal()
{

	return true;
}
int main() 
{


	int octalNum[50];
	int n;
	int size;
	
	
	cout<<"And Please Enter the size"<<endl;
	cin>>size;
	
	cout<<endl<<"\t........Please Enter the Number to check whether the Number is Octal or not........"<<endl<<endl;

	

	for (int i=0;i<size;i++)
	{
		cout<<endl<<"Enter values= "<<endl<<endl;
		cin>>octalNum[i];
	cout<<endl<<endl<<"Values are= "<<octalNum[i];
n++;
		
	}
	
	if (n>=8)
	{
		
		cout<<endl<<"\t........Number is Not Octal........"<<endl<<endl;
		
	} 
	
	if (n<8)
{

	cout<<endl<<"\t..........The Number is Octal Number........"<<endl<<endl;

int ch; 
    


	
    
    do{

cout<<endl<<"\t1- SEE TIME TABLE........"<<endl<<endl;
cout<<endl<<"\t2- SEE FREE SLOTS........"<<endl<<endl;
cout<<endl<<"\t0- EXIT........"<<endl<<endl;

cout<<endl<<"\t........Now select your choice........"<<endl<<endl;
cin>>ch;

switch (ch)
{
case 0:
	break;

case 1:
	
break;

case 2:

break;

case 3:

break;
}
}
while(ch!=0);

}



return 0;
}


 
