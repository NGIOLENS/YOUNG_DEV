#include <iostream>

using namespace std;

int main()
{
	double num_one;
	double num_two;
	double result;
	
	
	cout<<("Enter two numbers: ");
	cin>>num_one,num_two;
	
	if(num_one>num_two){
		result = num_one-num_two;
		cout<<"\nAnswer: "<<result;
		
	}
	else if(num_two>num_one){
		result = num_one/num_two;
		cout<<"\nAnswer: "<<result;
	}
	else{
		result = num_one+num_two;
		cout<<"\nAnswer: "<<result;
	}
}