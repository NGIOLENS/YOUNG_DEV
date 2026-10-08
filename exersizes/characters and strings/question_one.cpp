#include <iostream>
using namespace std;

int main()
{


	char c;
	
	cout<<("Enter an input: ");
	cin>>c;
	
	
	if(isalnum(c))
	{
		if(isalpha(c))
		{
		 cout<<("\nInput is a letter");	
		}
		else
		{
		 cout<<("\nInput is a number");	
		}
		
	}
	else
	{
		cout<<("\nInput is a special charactor");
	}
	return 0;
}



