#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
	char c;
	
	cout<<"Enter a charactor: ";
	cin>>c;
	
	if(isalpha(c))
	{
	 if(isupper(c))
	 {
	 	cout<<"%c is in uppercase"<<c;
	 }
	 else
	 {
	 	cout<<c<<" is in lowercase";
		 }	
	}
	else
	{
		cout<<"%c is not a letter";
	}
}
