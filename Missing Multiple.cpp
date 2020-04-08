#include<iostream>


using namespace std;


int main() {


	int  n,diff;
    cout<<"Enter size of array:\n";
	cin >> n;

	int a[1000];
    cout<<"Enter array:\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
    diff= a[0];
    int l=0,h=a[n-1];
    for(int i=0;i<n;i++){
        while((a[i]-i)!=diff){
            cout<<i+diff<<" ";
            diff++;
        }
    }
    
    return 0;
}
