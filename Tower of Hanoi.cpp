#include <stdio.h>
#include <iostream>
using namespace std;

void toh(int n, int a, int b, int c)
{

    if (n > 0)
    {

        toh(n - 1, a, c, b);
        cout << "move " << a << " to " << c << endl;
        toh(n - 1, b, a, c);
    }
}

int main(){
    int n,a,b,c;
    cout<<"Enter no. of disc's:\n";
    cin>>n;
    toh(n,1,2,3);
    
    return 0;
}