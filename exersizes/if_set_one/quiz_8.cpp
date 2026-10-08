#include <iostream>

using namespace std;

int main()
{
	int speed;
	int speedlimit;
	
	cout<<"Enter vehicle's speed: ";
	cin>>speed;
	
	cout<<"\nEnter the speed limit: ";
	cin>>speedlimit;
	
	
	int excess;
	excess = speed-speedlimit;
	
	if(excess>0&&excess<=30){
		int difference;
		difference = speed-speedlimit;
		
		cout<<"\nThe vehicle's speed is:"<<speed<<"KPH";
		cout<<"\nThe speed limit is: "<<speedlimit<<"KPH";
		cout<<"\nYou have exceeded the speed limit by:"<<difference<<"KPH";
		cout<<"\nTHE FINE CHARGED IS 2500/= ";
		
		
		
	}
	else if(excess>30){
		int difference;
		difference = speed-speedlimit;
		
		cout<<"\nThe vehicle's speed is:"<<speed<<"KPH";
		cout<<"\nThe speed limit is: "<<speedlimit<<"KPH";
		cout<<"\nYou have exceeded the speed limit by:"<<difference<<"KPH";
		cout<<"\nTHE FINE CHARGED IS 4000/= ";
		
		
		
		
		
	}
	else{
		cout<<("THE VEHICLE IS WITHIN THE SPEED LIMIT");
		
		
		
		
		
		
	}
	
	
	return 0;
	
}