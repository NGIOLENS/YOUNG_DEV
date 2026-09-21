#include <iostream>

using namespace std;

int main()
{
    float num;
    cout<<"Enter measurement in cm: \n";
    cin>>num;

    float meter = num/100;

    cout<<num<<"cm ="<<meter<<" metres.";
}