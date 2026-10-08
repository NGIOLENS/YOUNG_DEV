#include <iostream>
using namespace std;


int main()
{
	char Operator;
	double num_one;
	double num_two;
	int valid;
	double answer;

	cout<<"\nEnter your first number: ";
	cin>>num_one;
	
	cout<<"\nEnter your Second number: ";
	cin>>num_two;
	
	do{
	valid = 1;
		
    cout<<"\nEnter an operator ['+','-','*','/']: ";
	cin>>Operator;
	
	switch(Operator){
	
	case'+':
		answer = num_one+num_two;
		cout<<"Answer: "<<answer;	
	     break;
	
	case'-':
		answer ==num_one-num_two;
		cout<<"Answer: "<<answer;
		break;
	
	case'*':
		answer==num_one*num_two;
		cout<<"Answer: "<<answer;
		break;
	
	case'/':
		if(num_two!=0){
		
		answer == num_one/num_two;
		cout<<"Answer: "<<answer;
	}
	    else{
			cout<<"Can not divide number by 0";
		}
		break;
	
	case'%':
		answer == num_one/100;
		cout<<"Answer: "<<answer;
		break;
		
	
	default:
		cout<<"Error:Invalid operator entered!Try again";
		valid = 0;
	}
	
	
	
	
    
	
	}while(valid==0);
	
	
	
    return 0;	
	
}