#include <iostream>

using namespace std;

int main()
{
    int arr[100], n,high;
    cout << "Enter the size of array:\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //We are finding max no in array to create hash of that size

    for(int i=0;i<n;i++){
        if(high<arr[i])
        {
            high=arr[i];
        }
    }

    // initialise the hash with zero and inc the value as we visit.

    int hash[high] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    
    for (int i = 0; i < high; i++)
    {
        if (hash[i] > 1)
        {
            cout<<i<<" is "<<hash[i]<<" times.\n";
        }
    }
    return 0;
}