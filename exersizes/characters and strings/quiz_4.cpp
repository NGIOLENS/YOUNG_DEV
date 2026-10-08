#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
	char s;
	char i;
	cout<<"Enter a charactor:";
	cin>>s;
	
	if(isalpha(s))
	{
	  if(isupper(s) )
	  {
	  	i = tolower(s);
	  	cout<<s<<" in lowwer case is  "<<i;
	  	
		  }
	   else
	   {
	   	
	   	
	   	 i = toupper(s);
		cout<<s<<" in upper case is  "<<i;	
		   
				 }	  	
	}
	else
	{
		cout<<"\nThis is not a letter";
	}
}
