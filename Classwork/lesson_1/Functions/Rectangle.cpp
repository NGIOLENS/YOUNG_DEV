#include<iostream.h>
double rect_area(double width, double length); /* Function prototype */
int main()
{
	double ar,w,h;

	cout<<"Enter the width and length of the rectangle: ";
	cin>>w>>h;

	ar=rect_area(w,h); /*Function call */

	cout<<"\nThe area of the rectangle is "<<ar<<"\n\n";
	return 0;
}
double rect_area(double width, double length) /*Function header / heading */
{
	double area;
	area = width * length;	// Function body & function definition
	return area;					
}
