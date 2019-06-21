#include <iostream>

using namespace std;

//Task3 Check if a given year is a leap year

int main()
{
    //The conditions for a year to be a leap year are that it must be divisible by 4
    //But if it is divisible by 100 then it must also be divisible by 400

    int year;
    cout<<"Please enter the year you would like to check\t";
    cin>>year;

    //We create a flag variable
    //If flag is 0 then it is not a leap year
    //If flag is 1 then it is a leap year
    int flag=0;
    if(year%400==0)
    {
        flag=1;
    }
    else if((year%100!=0)&&(year%4==0))
    {
        flag=1;
    }

    if(flag==1)
    {
        cout<<"\nThis year is a leap year";
    }
    if(flag==0)
    {
        cout<<"\nThis year is not a leap year";
    }
    return 0;
}
