#include <iostream>
using namespace std;

int main()
{
	int r[10] ={10,12,23,14};
	
	int p;
	
	p = (sizeof(r)/sizeof(int));
	
	cout<<p;
}
