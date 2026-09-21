#include <iostream>
using namespace std;

int main()
{
	int x,y,z;

	cout<<"Enter First number: ";
	cin>>x;
	cout<<"Enter Second number: ";
	cin>>y;
	cout<<"Enter third number: ";
	cin>>z;

	int sum,product,average;

	sum = x+y+z;
	product =x*y*z;
	average=sum/3;

	cout<<"\nsum:"<<sum;
	cout<<"\nproduct:"<<product;
	cout<<"\naverage:"<<average;
	


	return 0;
}
