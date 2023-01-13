#include<iostream.h>
using namespace std;
void insert(int a[],int n){
    int i=n; temp;
    temp=a[n];
    while(i>1 && temp>a[i/2]){
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=temp;
}
int main(){
    int a={0,35,42,5,9,8,10}
    for(int j=2;j<7;j++){
        insert(a,j)
    }
    for(int i=1;i<7;i++){
        cout<<a[i];
    }
}