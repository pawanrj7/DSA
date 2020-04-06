#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int *t;
    *t=*a;
    *a=*b;
    *b=*t;
}

void bubble(int arr[],int n){
    
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(&arr[j+1], &arr[j]);
            }

        }
    }

}

int main(){
    int n,arr[100];
    cout<<"Enter size of array:\n";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    bubble(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}