#include <iostream>

using namespace std;

int main()
{
	double num_one;
	double num_two;
	double result;
	
	
	cout<<"Enter two numbers: ";
	cin>>num_one;
    cin>>num_two;
	
	if(num_one>num_two){
		if(num_two!=0){
			result = num_one/num_two;
		cout<<"\nAnswer: "<<result;
		}
		else{
			cout<<"ERROR!! CANNOT DIVIDE NUMBER BY ZERO ";
		}
		
	}
	else if(num_two>num_one){
		if(num_one!=0){
		result = num_two/num_one;
		cout<<"\nAnswer: "<<result;
		}
		else{
			cout<<"ERROR!! CANNOT DIVIDE NUMBER BY ZERO ";
		}
		
	}
	else{
		cout<<"ERROR!! ENTER A VALID INTEGER";
	}	
	}