#include <iostream>
using namespace std;

#include <string.h>

int  isAna(int hash[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (hash[i] != 0)
            {
                return 1;
            }
            
        }
        return 0;
    }

int main()
{
    char a[100], b[100],result;
    cout << "Enter the first string:\n";
    gets(a);
    cout << "Enter the second string:\n";
    gets(b);

    int hash[26] = {0};
    for (int i = 0; i < strlen(a); i++)
    {
        hash[a[i]-97] += 1;
    }

    for (int i = 0; i < strlen(b); i++)
    {
        hash[b[i]-97] -= 1;
    }
    result= isAna(hash);

    if(result==1)
    {
        cout<<"Strings are not Anagram";
    }
    else
    {
        cout<<"Strings are Anagram";
    }

    return 0;
    
}