#include <iostream>

using namespace std;
int main(void)
{
	cout<<("DIVISIBILITY CALCULATOR");
	
	int number;
	cout<<"\nEnter number: ";
	cin>>number;
	
	if(number % 9 !=0)
	{
		cout<<"\nERROR number is not divisible by nine";
		return 1;
	}
	
	if(number % 2 == 0 && number % 9 == 0)
	{
		cout<<"Number is evenly divisible by nine";
	}
	else
	{
		cout<<"number is NOT evenly divisible by nine";
	}
}
