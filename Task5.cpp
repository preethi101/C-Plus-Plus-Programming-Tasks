#include <iostream>

using namespace std;

//Task5 Find the largest and smallest element of an array

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

    int minimum=myarray[0];

    for(i=0; i<mylength; i++)
    {
        if(minimum>myarray[i])
        {
            minimum=myarray[i];
        }
    }

    int maximum=myarray[0];

    for(i=0; i<mylength; i++)
    {
        if(maximum<myarray[i])
        {
            maximum=myarray[i];
        }
    }

    cout<<"\nThe minimum element in the array is "<<minimum;
    cout<<"\nThe maximum element in the array is "<<maximum;

    return 0;
}
