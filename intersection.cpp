#include <iostream>

using namespace std;

void inter(int a[], int b[], int n, int m)
{
    int k, i, j, c[200], z;

    for (i = 0, j = 0, k = 0; i < n && j < m;)
    {
        if (a[i] == b[j])
        {
            c[k] = a[i];
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    int n, m, i, j, k, a[100], b[100], c[200];
    cout << "Enter size of first sorted array:\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter size of second sorted array:\n";
    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    // merging of two array
    inter(a, b, n, m);

    //

    return 0;

}