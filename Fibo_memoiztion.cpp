#include <stdio.h>
#include <iostream>
using namespace std;

int f[100] = {0};


int fib(int n)
{

    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 1] == 0)
        {
            f[n - 1] = fib(n - 1);
        }
        if (f[n - 2] == 0)
        {
            f[n - 2] = fib(n - 2);
        }
        return f[n - 1] + f[n - 2];
    }
}

int main()
{
    int n;
    cout << "Enter the number:\n";
    cin >> n;
    int ans = fib(n);
    cout << ans;
    return 0;
}