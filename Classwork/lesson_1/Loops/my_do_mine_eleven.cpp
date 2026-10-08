#include <iostream>
using namespace std;

int main()
{
	int number;
	
	cout<<"Enter a number: ";
	cin>>number;
	
	int sum =0;
	int digit =0;
	int even = 0;
	int sum_even = 0;
	int odd = 0;
	int sum_odd = 0;
	while(number != 0)
	{
		digit = number % 10;
		sum += digit;
		number = number / 10;
		//condition for checking even numbers
		
		if(digit % 2 ==0)
		{
			even++;
			sum_even += digit;
		}
		else
		{
			odd++;
			sum_odd += digit;
		}
		
		
	};
	cout<<sum;
	cout<<even;
	cout<<sum_even;
	cout<<odd;
	cout<<sum_odd;	
	
	
}
