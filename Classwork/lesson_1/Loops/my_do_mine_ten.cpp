#include <iostream>
using namespace std;

int main()
{
	int number;
	
	cout<<"Enter a number: ";
	cin>>number;
	
	int sum =0;
	int digit =0;
	while(number != 0)
	{
		digit = number % 10;
		sum += digit;
		number =number / 10;
		
		
	};
	cout<<sum;
	
	
}
