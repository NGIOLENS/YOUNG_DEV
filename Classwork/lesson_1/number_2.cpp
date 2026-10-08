#include <iostream>
using namespace std;

int main()
{
	float my_num;
	
	cout<<"Enter a number: ";
	//seting a flag
	//ios input output stream
	//fixed:way we 
	cin>>my_num;
	cout.setf(ios::fixed);
	cout.setf(ios:: showpoint);
	cout.precision(4);
	
	
	cout<<"\n The number you entered was: "<<my_num<<"\n\n";
	
	return 0;
	

		
}
