#include<stdio.h>
#include<iostream>
using namespace std;

int fib(int n){

    if(n<=1){
        return n;
    }
    return fib(n-1)+ fib(n-2);
}

int main(){
    int n;
    cout<<"Enter the number:\n";
    cin>>n;
    int ans= fib(n);
    cout<<ans;
    return 0;
}