#include <iostream>

using namespace std;

int main()
{
    float dist;
    float time;

    cout<<"Enter distance travelled: ";
    cin>>dist;
    cout<<"Enter time taken: ";
    cin>>time;

    float km = dist/1000;
    float hrs = time/60;
    float speed = km/hrs;

    cout<<speed<<"KM/H";


}
