#include <iostream>
#include<cmath>
using namespace std;

//Task 9 Write a program to convert days into years, months and days

int main()
{
    int total_days;
    cout << "Enter the number of days";
    cin>>total_days;

    int years, weeks, days;
    years=floor(total_days/365);

    int temp;
    temp=total_days%365;
    weeks=floor(temp/7);
    days=temp%7;

    cout<<"\nYears "<<years;
    cout<<"\nWeeks "<<weeks;
    cout<<"\nDays "<<days;
    return 0;
}
