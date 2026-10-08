#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	char num;
	
	cout<<"SHAPE CALCULATOR";
	cout<<"\n________________";
	cout<<"\nChose any of the following shapes below";
	cout<<"\n 1)  rectangle";
	cout<<"\n 2)  circle";
	cout<<"\n 3)  right-angle triangle";
	
	cout<<"\nEnter the number assigned to the shape you would like to calculate: ";
	cin>>num;
	
	
	
	
	
	
	
	switch(num){
		
		case('1'):{
		    float length;
			float width;
			float perimeter;
			float area;
			cout<<"\nEnter your dimensions length and width respec1tivly:";
			cin>>length;
			cin>>width;
			cout<<"\nYour shape is a rectangle";
			
			perimeter = 2*(length+width);
			cout<<"\nThe perimeter is: "<<perimeter;
			
			area= length*width;
			cout<<"\nThe area is: "<<area;
			
		}
			break;
		
			
			
			
		case('2'):{
			float radius;
		     float perimeter;
		     float area;
			 
			 cout<<"\nEnter the radius of your circle: ";
			 cin>>radius;
			 
			 cout<<"\nYour shape is a circle";
			 
			 perimeter = 2*3.14*radius;
			 area = 3.14*radius*radius;
			 
			 cout<<"\nThe perimeter is: "<<perimeter;
			 cout<<"\nThe area is: "<<area;
			break;
		}
		     
		case('3'):{
			float height;
			float base;
			float area;
			float perimeter;
			float hypotenues;
			
			cout<<("\n Enter the dimensions height and base respectivly: ");
			cin>>height;
			cin>>base;
			
			hypotenues = sqrt((height*height)+(base*base));
			
			perimeter = height+base+hypotenues;
			area = 0.5*height*base;
			
			cout<<"\nThe perimeter is: "<<perimeter;
			cout<<"\nThe area is: "<<area;
			break;
		
		default:
		    cout<<"\nERROR!!!INVALID CHOICE ";
		}
		    
			
			
			
			
			
	return 0;			
			
			
	}
	
	
	
	
	
	
	
}