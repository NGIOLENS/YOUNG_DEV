#include <iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter a number:";
	cin>>number;
	int i;
	int j;
	int k = 2;
	
	for(i = 1;i <= number;i++)
	{
		int y = i + 1;
		
		for(j = 1;j <= number;j++)
		
		{
			
			if (j < k)
			{
				cout<<"  "<<y;
				
			}
			y++;
		
			
		}
		k++;
		
		cout<<"\n";
	}
}
