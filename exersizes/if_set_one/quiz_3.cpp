#include <iostream>

using namespace std;

int main()
{
	double gross_pay;
	double net_pay;
	double tax;

    cout<<("Gross pay__________________Tac Rate");
    cout<<("\nOver 40000                    30%");
	cout<<("\n>=30000 but below 40000       25%");
	cout<<("\n>=20000 but below 30000       15%");
	cout<<("\n>=10000 but below 20000       10%");
	cout<<("\nbelow 10000                   no tax.");
	
	
	cout<<("\nEnter your Gross pay:");
	scanf("%lf",&gross_pay);
	
	if(!isdigit(gross_pay))
	{
		goto x;
	}
	
	
	
	
		
		if(gross_pay>40000)
		{
		tax = gross_pay*30/100;
	    net_pay = gross_pay-tax;
	     cout<<"Your tax is: "<<tax<<"which makes your net pay to be "<<net_pay;
	    
		}
	    
		
		
		else if (gross_pay>=30000&&gross_pay<40000)
		{
	    tax = gross_pay*25/100;
	    net_pay = gross_pay-tax;
	    cout<<"Your tax is: "<<tax<<"which makes your net pay to be "<<net_pay;
	    
		}
	    
	    
	    else if(gross_pay>=20000 && gross_pay<30000)
		{
	    tax = gross_pay*15/100;
	    net_pay = gross_pay-tax;
	    cout<<"Your tax is:"<<tax<<" which makes your net pay to be "<<net_pay;
	    
		}
	    
	    
	    else if(gross_pay>=10000&&gross_pay<20000)
		{
	    tax = gross_pay*10/100;
	    net_pay = gross_pay-tax;
	    cout<<"Your tax is: "<<tax<<"which makes your net pay to be"<<net_pay;
	    
		}
	    
	    
	    else if(gross_pay<10000 && gross_pay >= 0)
		{
	    	cout<<"Your are not Qualified for taxation your pay remains the same ->"<<gross_pay;
		}
	    else
		{
			x:
	    	cout<<("Wrong Fomat");
		}
	    
	    
			
			
				
	
}