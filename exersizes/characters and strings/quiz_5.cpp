#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{
	char buffer[100];
    cout<<"Enter a sentence:";
    fgets(buffer,100,stdin);
    
    int i;
    for(i = 0;buffer[i] != '\0';i++)
    {
    	if(isalpha(buffer[i]))
    	{
    		if(isupper(buffer[i]))
    		{
    			
    			cout<<tolower(buffer[i]);
			}
			else
			{
				
				cout<<toupper(buffer[i]);
			}
		}
		else
		cout<<buffer[i];
	}
}

