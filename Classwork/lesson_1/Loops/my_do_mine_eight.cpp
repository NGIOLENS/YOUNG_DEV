#include <iostream>
#include <iomanip>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
using namespace std;

void reverse(char* str);
int main()
{
	double k = 2;
	int i = 0;
	int n;
	cout<<"Enter number of terms: ";
	cin>>n;
	
	while(i < n)
	{
		cout<<k<<fixed<<setprecision(1);
		k = k * 3;
		cout<<"\n";
		i++;
	}
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
		
		printf("%c",str[k]);
	}
	
}

