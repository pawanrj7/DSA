#include<iostream>


using namespace std;


int main() {


	int sum, n,add;
    cout<<"Enter size of array:\n";
	cin >> n;

	int a[1000];
    cout<<"Enter array:\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
    sum=0;
    for (int i = 0; i < n; i++) {
		sum+= a[i];
	}
    add= a[n-1]*(a[n-1]+1)/2;
    cout<<"Missing element is: "<<add-sum;
    return 0;
}
