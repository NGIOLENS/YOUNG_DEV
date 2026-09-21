#include <iostream>
using namespace std;

int main()
{
    //get users input

    int age;

    cout<<"Enter your age: ";
    cin>>age;

    //compare age to set value 18

    if (age >=18)
    {
        cout<<"YOU CAN VOTE";
    }
    else
    {
        cout<<"You are too young to vote.";
    }
}