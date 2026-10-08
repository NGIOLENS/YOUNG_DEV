#include <iostream>
using namespace std;
int main()
{
	int k;

	k = 5;//Initialization

	do
	{
		cout<<"\nk = "<<k;
		k = k + 5;//updation
	}while(k <= 200); //Condition

	cout<<"\n\n";
	return 0;
}
