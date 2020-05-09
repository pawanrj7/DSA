#include <iostream>
#include <string.h>
using namespace std;

void swap(char *s,int l, int h)
{
    char ch= s[l];
    s[l]=s[h];
    s[h]=ch;
}


void perm(char *s, int l, int h)
{
    
    if (l == h)
    {
        puts(s);
        
    }
    else
    {
        for (int i = l; i <= h; i++)
        {
            
            swap(s,l,h); 
            perm(s, l + 1, h);
            swap(s, h, l);
            
            
        }
    }
}
int main()
{
    char str[100];
    char *s;
    cout << "Enter the string:\n";
    gets(s);
    perm(s, 0, strlen(s)-1);

    return 0;
}