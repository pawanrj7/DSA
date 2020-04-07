#include <iostream>

using namespace std;

class Array
{
private:
    int *a;
    int length;
    int size;

public:
    Array()
    {
        size = 10;
        a = new int[10];
        length = 0;
    }
    Array(int sz)
    {
        size = sz;
        a = new int[size];
        length = 0;
    }
    void add(int val)
    {
        a[length]=val;
        length++;
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << a[i]<<endl;;
        }
    }
    ~Array(){
        delete []a;
    }
};

int main()
{
    int n, val;
    cout << "Enter size of array:\n";
    cin >> n;
    Array a(n);
    cout << "Enter values for array";
    for (int j = 0; j < n; j++)
    {
        cin >>val;
        a.add(val);
    }
    a.display();
    return 0;
}