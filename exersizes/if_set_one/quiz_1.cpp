#include <iostream>

using namespace std;

void the_bottle(int y,int z);
int main()
{
	int choice_the;
	int bottle_the;
	cout<<"****Jamal and Daughters Pub*****\n";
 	cout<<"Beer Brand________________Price\n";
 	cout<<"1) Tusker                 100/=\n";
 	cout<<"2) Pilsner                120/=\n";
 	cout<<"3) Smirnoff Ice           140/=\n";
 	cout<<"4) White Cap               90/=\n";
 	
 	x:
 	cout<<"\nEnter your choice: ";
 	cin>>choice_the;
 	while(!(choice_the >=1&&choice_the <=4))
 	{
 		cout<<"\nInvalid input";
 		goto x;
	 }
 	cout<<"\nHow many bottles do you want: ";
 	cin>>bottle_the;
 	the_bottle(choice_the,bottle_the);
 	
 	
 	
 	
 	
 	
}



void the_bottle(int y,int z)
{
	float total;
	if(y == 1){
		total = z*100;
		cout<<"You chose Tusker.Total cost of"<<z<<"bottles = "<<total;
		
	}   
	 
	else if(y ==2){
		total = z*120;
		cout<<"You chose Pilsner.Total cost of"<<z<<"bottles = "<<total;
		
	} 
	else if(y == 3){
		total = z*140;
		cout<<"You chose Smirnoff.Total cost of"<<z<<"bottles = "<<total;
		
	}
	else if(y == 4){
		total = z*90;
		cout<<"You chose White Cup.Total cost of"<<z<<"bottles = "<<total;
	} 
}