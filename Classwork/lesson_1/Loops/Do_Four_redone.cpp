#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double k;

	k = 600;
	
	
	

	do
	{
		cout.setf(ios::fixed);
		cout.setf(ios:: showpoint);
		cout.precision(4);
		cout<<"\nk = "<<k;
		k = k / 2;
	}while(k >= 10);

	cout<<"\nafter existing the loop k = "<<k;
	return 0;
}
