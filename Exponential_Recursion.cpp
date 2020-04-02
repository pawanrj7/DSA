#include <stdio.h>
#include <iostream>
using namespace std;

double exp(int x, int n)
{
    static double s = 1;
    if (n == 0)
    {
        return s;
    }
    s = 1 + x * s / n;
    return exp(x, n - 1);
}

int main()
{
    int x, n;
    cout << "enter power and no of terms for exponential:\n";
    cin >> x >> n;
    double ans = exp(x, n);
    cout << ans;

    return 0;
}