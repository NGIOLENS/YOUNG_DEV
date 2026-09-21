#include <iostream>
using namespace std;

int main()
{
    float temp;
    cout<<"Enter temperature: ";
    cin>>temp;

    float fh = (temp*1.8) +32;

    cout<<"\n"<<temp<<" C = "<<fh<<" F";

    return 0;
}