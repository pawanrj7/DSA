#include<iostream>


using namespace std;


int main() {


	int sum, n;
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
    cout<<"Missing element is: "<<n*(n-1)/2;
    return 0;
}
