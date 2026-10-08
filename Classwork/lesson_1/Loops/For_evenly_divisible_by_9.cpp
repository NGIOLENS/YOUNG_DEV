/*Program to print all numbers evenly divisible by nine
between 400 and 600*/
#include<iostream>
using namespace std;
int main()
{
	int h, sum = 0;

	cout<<"The numbers evenly divisible by 9 between 100 and 2000 are:\n\n";
	for(h = 100;h <= 2000;h++)
	{
		if(h  % 2 == 0)
		{
			if(h % 9 == 0)
			cout<<h<<" ";
			
		}
		
	}

	cout<<"\n\n";
	return 0;
}
