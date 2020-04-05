#include <stdio.h>
#include <iostream>

using namespace std;

int binary(int *arr, int key, int n)
{
    int low = 0, high = n - 1,mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid+1;
        }
        else if (key > arr[mid])
        {
            low = mid;
        }
        else
        {
            high = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, key, arr[20];
    cout << "Enter size of array(<20):\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key to be search:\n";
    cin >> key;
    int ans = binary(arr, key, n);
    cout << ans;
    return 0;
}