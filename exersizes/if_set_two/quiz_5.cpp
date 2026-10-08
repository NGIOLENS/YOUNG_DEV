#include <iostream>

using namespace std;

int main(void)
{
	cout<<"Y CALCULATOR";
	
	int x;
	int y;
	
	cout<<"\nEnter a value for X: ";
	cin>>x;
	
	if(x > 5)
	{
	  y = 4*x*x*x + 2*x - 6;
	  cout<<"Value of Y: "<<y;	
	}
}
