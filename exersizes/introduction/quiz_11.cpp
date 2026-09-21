#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //get users number

    float num;
    cout<<"Enter a number: ";
    cin>>num;

    float square = num*num;
    float Cbrt = cbrt(num);
    float Sqrt = sqrt(num);

    cout<<"SQUARE: "<<square;
    cout<<"\nCUBEROOT: "<<Cbrt;
    cout<<"\nSQUAREROOT: "<<Sqrt;
}

