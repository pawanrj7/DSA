#include<stdio.h>
#include<iostream>
using namespace std;

int pow(int n,int p){

    if(p==1){
        return n;
    }
    if(p%2==0){
        return pow(n*n, p/2);
    }
    return n*pow(n*n, (p-1)/2);
}

int main(){
    int n,p,ans;
    cout<<"Enter the number and power of it:\n";
    cin>>n>>p;
    ans= pow(n,p);
    cout<<ans;
    return 0;
}