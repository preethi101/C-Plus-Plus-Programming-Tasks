#include <iostream>

using namespace std;

//Task7 Write a function to swap two numbers
void my_swap(int &num1, int &num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a\n";
    cin>>a;
    cout<<"Enter the value of b\n";
    cin>>b;
    my_swap(a,b);
    cout<<"\nThe new value of a is "<<a;
    cout<<"\nThe new value of b is "<<b;
    return 0;
}
