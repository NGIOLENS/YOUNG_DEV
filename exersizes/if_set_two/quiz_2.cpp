#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<"TAX CALCULATOR";
	
	float salary;
	
	cout<<"\nEnter your salary: ";
	cin>>salary;
	
	if(salary < 0)
	{
		cout<<"\nERROR:YOU HAVE ENTERED A NEGATIVE NUMBER";
	}
	
	float tax;
	
	if(salary >= 20000)
	{
		
		tax = salary*0.15;		
	}
	else if(salary >=10000)
	{
	tax = salary*0.10;	
	}
	else if( salary >=0)
	{
	 tax = 0;	
	}
	else
	{
		cout<<"WRONG INPUT";
		return 1;
	}
	cout<<"\nTOTAL TAX = "<<fixed<<setprecision(2)<<tax;
	cout<<"\nYOUR NET SALARY = "<<fixed<<setprecision(2)<<salary - tax;
	return 0;
}
