#include <iostream>

using namespace std;

//Task6 Sort the elements of an array in ascending order

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

    int j,temp;

    //The following code sorts the elements of the array using bubble sort

    for(j=0; j<mylength; j++)
        for(i=1; i<mylength; i++)
    {
        if(myarray[i-1]>myarray[i])
        {
            temp=myarray[i];
            myarray[i]=myarray[i-1];
            myarray[i-1]=temp;
        }
    }

    cout<<"\nThe sorted array is \n";

    for(i=0;i<mylength; i++)
    {
        cout<<myarray[i]<<" ";
    }
    return 0;
}
