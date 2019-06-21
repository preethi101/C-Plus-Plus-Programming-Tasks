#include <iostream>
#include<string>
#include<string.h>
#include<ctype.h>
using namespace std;

//Task 10 Converts a string to lowercase
int main()
{
    char str1[50];
    cout << "Enter a string";
    cin>>str1;
    int len=strlen(str1);
    for(int i=0; i<len; i++)
    {
        if(isupper(str1[i]))
        {
            int num=str1[i];
            num=num+32;
            str1[i]=(char)num;
        }
    }

    cout<<"\nYour string in lowercase is "<<str1;
    return 0;
}
