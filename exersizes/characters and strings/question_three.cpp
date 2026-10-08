#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
typedef char *string;

int main()
{
      
      char buffer[100];
      cout<<"Enter a sentence:";
      fgets(buffer,100,stdin);
      int i;
      int count_l =0;
      int count_d =0;
      int count_ch =0;
      int count_s =0;
      
     for(int i = 0;buffer[i] != '\0';i++)
     {
     	if(buffer[0] == ' ')
     	 continue;
     	if(buffer[i] == '\n')
	    continue; 
     	
		  
     	if(isalnum(buffer[i]))
     	{
     	 if(isalpha(buffer[i]))	
     	 {
     	  count_l++;
		 }
		 else
		 {
		  count_d++;	
		 }
		 }
		else if(isblank(buffer[i]))
		{
		  count_s++;
	    }
	    
	    else
	    {
	     count_ch++;	
		}
	
    }
	cout<<buffer<<" has :-";
	cout<<"\n"<<count_l<<" letters "<<count_d<<" digits "<<count_s<<" spaces "<<count_ch<<" special charactors ";	
}
      

