#include <stdio.h>
#include <iostream>

using namespace std;

int ncr(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    return ncr(n - 1, r - 1) + ncr(n - 1, r);
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r:\n";
    cin >> n >> r;
    int ans = ncr(n, r);
    cout << ans;
    return 0;
}