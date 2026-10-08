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
	
	if(Operator=='+'){
		answer = num_one+num_two;
		cout<<"Answer:"<<answer;	
	}
	
	else if(Operator=='-'){
		answer =num_one-num_two;
		cout<<"Answer: "<<answer;
		
	}
	else if(Operator=='*'){
		answer= num_one*num_two;
		cout<<"Answer:"<<answer;
		
	}
	else if(Operator =='/'){
		if(num_two!=0){
			answer= num_one/num_two;
			cout<<"Answer: "<<answer;
			
		}
		else{
			cout<<"Can not divide number by 0";
		}
		
	}
	else if (Operator =='%'){
		answer = num_one/100;
		cout<<"Answer: "<<answer;
		
		
	}
	else{
		cout<<"Error:Invalid operator entered!Try again";
		valid = 0;
	}
	
	}while(valid==0);
	
	
	
    return 0;	
	
}
