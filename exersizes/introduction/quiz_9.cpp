#include <iostream>

using namespace std;

int main()
{
    //get users input
    float weight;
    cout<<"Enter weight in grams: ";
    cin>>weight;

    //covert grames into kg

    float kg = weight/1000;
    //get number of packages required to reach one kg
    float packages = 1/kg;

    //output solution
    cout<<"The weight of the package is "<<kg<<" kilogrames";
    cout<<"\nIt takes "<<packages<<" such packages to form one kilogram.";

}