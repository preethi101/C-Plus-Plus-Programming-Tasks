#include <iostream>

using namespace std;

//Task2 Check if a number is odd or even

int main()
{
    int mynum;
    cout<<"Enter a number\n";
    cin>>mynum;

    if(mynum%2==0)
    {
        cout<<"\nYour number is even";
    }

    else
    {
        cout<<"\nYour number is odd";
    }
    return 0;
}
