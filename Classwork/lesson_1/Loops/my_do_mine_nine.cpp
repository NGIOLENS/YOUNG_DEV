#include <iostream>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
using namespace std;

void reverse(char* str);

int main()
{
	char buffer[100];
	cout<<"Enter a number: ";
	fgets(buffer,100,stdin);
	
   
	cout<<"\n";
	
	reverse(buffer);
	
	
	
	
	
}




void reverse(char* str)
{
	//check whether there is a string in the first place
	if(!str)
	{
		return;
	}
	//find the number of charactors in the string
	int len = strlen(str);
	//replace new line charactor with null terminator
	if(str[len -1] == '\n')
	{
		str[len - 1] == '\0';
		len--;
		
	}
	int i;
	int j ;
	for(i = 0,j = len - 1;i < j;i++,j--)
	{
		//if there is a space in the string skip it
		if(str[i]== ' ')
		{
			j = j+1;
			continue;
		}
		
		char x = str[i];
		str[i] = str[j];
		str[j] = x;
	}
	int k;
	for(k = 0;k < len;k++)
	{
		if(str[k] == ' ')
		{
			continue;
		}
		
		cout<<str[k];
	}
	
}

