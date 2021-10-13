using namespace std;
#include <iostream>

class Sample
{
	//private data section
	private:
	int count;
	
	public:
	//default constructor
	Sample()
	{ count = 0;}      

	//parameterized constructor
	Sample(int c)
	{ count = c;}      

	//Operator overloading function definition
	Sample operator++()
	{ 
		++count;
		//returning count of Sample
		//There is no new object here, 
		//Sample(count): is a constructor by passing value of count
		//and returning the value (incremented value)
		return Sample(count);
	}
	
	//printing the value
	void printValue()
	{
		cout<<"Value of count : "<<count<<endl;
	}
};

//main program
int main()
{
	int i = 0;
	Sample S1(100), S2;

	for(i=0; i< 5; i++)
	{    
		S2 = ++S1;

		cout<<"S1 :"<<endl;
		S1.printValue();

		cout<<"S2 :"<<endl;
		S2.printValue();
	}
	return 0;    
}
