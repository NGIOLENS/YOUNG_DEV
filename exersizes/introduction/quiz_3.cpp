#include <iostream>

using namespace std;

int main()
{
    int len;
    int width;

    cout<<"Enter length: ";
    cin>>len;
    cout<<"Enter width: ";
    cin>>width;

    int perimeter = 2*(len+width);
    int area = len * width;

    cout<<"\nPerimeter: "<<perimeter;
    cout<<"\nArea: "<<area;

}