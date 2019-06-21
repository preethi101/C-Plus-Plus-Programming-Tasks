#include <iostream>

using namespace std;

//Task 4 Find the sum of all the elements of an array

int main()
{
    int myarray[50];
    int mylength;
    cout<<"Enter the number of elements in your array\t";
    cin>>mylength;
    cout<<"\nEnter the elements of your array\n";

    int i;
    for(i=0;i<mylength; i++)
    {
        cin>>myarray[i];
    }

    int sum=0;

    for(i=0; i<mylength; i++)
    {
        sum+=myarray[i];
    }

    cout<<"\nThe sum of the elements of your array is "<<sum;
    return 0;
}
