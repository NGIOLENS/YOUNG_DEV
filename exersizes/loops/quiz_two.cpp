#include <iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter a number:";
	cin>>number;
	int i;
	int j;
	int k = 1;
	for(i = 1;i <= number;i++)
	{
		
		for(j = 1;j <= number;j++)
		
		{
			if(j >= i)
			{
				cout<<"  "<<j;
			}
			else
			{
				cout<<"   ";
			}
			
			
		
			
		}
		k++;
		cout<<"\n";
	}
}
