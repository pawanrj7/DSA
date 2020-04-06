#include<iostream>


using namespace std;
// Find the Largest and Smallest Number in array

int main() {


	int n, key;
    cout<<"Enter size of array:\n";
	cin >> n;

	int a[1000];
    cout<<"Enter array:\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//Algorithm to find the largest and smallest number

	int largest = INT_MIN;
	int smallest = INT_MAX;

	for (int i = 0; i < n; i++) {
		largest = max(largest, a[i]);
		smallest = min(smallest, a[i]);

	}

	cout << "Largest " << largest << endl;
	cout << "Smallest " << smallest << endl;


	return 0;

}