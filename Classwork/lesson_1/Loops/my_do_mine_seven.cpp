#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double k = 2;
	int i = 0;
	
	while(i < 20)
	{
		cout<<k<<fixed<<setprecision(1);
		k = k * 3;
		cout<<"\n";
		i++;
	}
}
