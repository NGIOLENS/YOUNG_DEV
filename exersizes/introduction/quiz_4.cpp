#include <iostream>

using namespace std;

int main()
{
    float len;
    float height;

    cout<<"Enter length: ";
    cin>>len;
    cout<<"\nEnter width: ";
    cin>>height;

    float area = 0.5*len*height;

    cout<<"\nArea: "<<area;

}