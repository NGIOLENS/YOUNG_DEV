#include <iostream>
using namespace std;

int main()
{
	int k = 10000;
	
	while(k >= 1)
	{
		cout<<k;
		k = k/10;
		cout<<"\n";
	}
}
