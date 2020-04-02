#include <stdio.h>
#include <iostream>
using namespace std;
long long fact(int n){
    if(n==1){
        return 1;
    }
    else{

        return n*fact(n-1);
    }
}

int main(){
    int n;
    long long ans;
    cin>>n;
    ans= fact(n);
    cout<<ans;
    return 0;
}