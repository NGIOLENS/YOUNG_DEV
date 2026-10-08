#include <iostream> 
#include<ctype.h>
using namespace std;
int main( )
{
	char letter;	 
	cout<<"Enter a character : ";
	cin>>letter;
	char upper = toupper(letter);

	 if ( upper == 'A')
		cout<<"\nThe character "<<letter<<" is a vowel";
	 else if (upper == 'E')
		cout<<"\nThe character is a vowel";
	 else if (upper =='I') 
		cout<<"\nThe character "<<letter<<" is a vowel";
	 else if (upper =='O')
		cout<<"\nThe character "<<letter<<" is a vowel";
	 else if (upper == 'U')
		cout<<"\nThe character "<<letter<<" is a vowel";
	 else
		cout<<"\nThe character "<<letter<<" is not a vowel";

	cout<<"\n\n";
	return 0;
}
