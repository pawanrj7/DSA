#include<iostream>
#include<string.h>

using namespace std;
void swap(char *s,int l, int h)
{
    char ch= s[l];
    s[l]=s[h];
    s[h]=ch;
}

int main()
{
    int n;
    char *s;
    gets(s);
    cout<<s;
    swap(s, 2, 3);
    cout<<s;
    
    
    return 0;
}