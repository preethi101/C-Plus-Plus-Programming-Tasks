#include <iostream>
using namespace std;

//Task 8 Check if two strings are anagrams

//Defining function to check whether anagram or not
void anagram(char word1[], char word2[])
{
    int flag=0;
    int x[26],y[26];

    //Initializing the array elements to 0
    int i=0;
    for(i=0; i<26; i++)
    {
        x[i]=0;
        y[i]=0;
    }

    //Counting how many occurrences of each letter in the word
    for(i=0; word1[i]!='\0'; i++)
    {
        int num=word1[i]-'a';
        x[num]++;
    }

    for(i=0; word2[i]!='\0'; i++)
    {
        int num=word1[i]-'a';
        y[num]++;
    }

    for(i=0; i<26; i++)
    {
        if(y[i]!=x[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        cout<<"\nThe two words are anagrams";
    }
    else if(flag==1)
    {
        cout<<"\nThe two words are not anagrams";
    }
}
int main()
{
    char str1[50],str2[50];
    cout<<"Enter your first word\n";
    cin>>str1;
    cout<<"\nEnter your second word\n";
    cin>>str2;
    anagram(str1,str2);
    return 0;
}
