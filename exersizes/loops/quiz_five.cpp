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
	for(i = 0;i < number;i++)
	{
		
		for(j = 0;j < number;j++)
		
		{
			if (j < k)
			{
				cout<<"   *";
			}
		
			
		}
		k++;
		cout<<"\n";
	}
}
