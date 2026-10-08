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
	else if(x < 5)
	{
		y = 3*x*x - 4*x +12;
		cout<<"Value of Y: "<<y;
	}
	else
	{
		y = 6*x - 5;
		cout<<"Value of Y: "<<y;
	}
}

