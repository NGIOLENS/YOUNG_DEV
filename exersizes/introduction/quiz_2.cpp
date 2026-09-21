#include <iostream>

using namespace std;

int main()
{
    float r;

    cout<<"Enter raduis: ";
    cin>>r;

    float circumference = 22/7*2*r;
    float area = 22/7*r*r;

    cout<<"\nCircumference:"<<circumference;
    cout<<"\nArea:"<<area;


}