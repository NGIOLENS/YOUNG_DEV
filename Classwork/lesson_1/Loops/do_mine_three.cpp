#include <iostream>
using namespace std;
int main()
{
	float k;

	k = 10000;//Initialization

	do
	{
		cout<<"  "<<k;
		k = k/2;//updation
	}while(k >= 78.125); //Condition

	cout<<"\n\n";
	return 0;
}
