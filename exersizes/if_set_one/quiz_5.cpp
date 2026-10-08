#include <iostream>

using namespace std;

int main()
{
	
	int value;
	
	cout<<"Enter any value:";
	cin>>value;
	
	if(value>0){
		cout<<"\npositive number";
	}
	else if(value<0){
		cout<<"\nnegative number";
	}
	else{
		cout<<"\n0";
	}
}