#include<iostream>

using namespace std;



void merge(int a[], int b[],int n, int m){
    int k,i,j,c[200];

    for( i=0,j=0,k=0; i<n && j<m; ){

        if(a[i]<b[j]){
            c[k++]=a[i++];

        }
        else{
            c[k++]=b[j++];
        }

    }
    for(; i<n;i++){
        c[k++]=a[i];
    }

     for(; j<m;j++){
        c[k++]=b[j];
    }
     for(i=0;i<(m+n);i++){
        cout<<c[i]<<" ";
    }
}

int main(){
    int n,m,i,j,k,a[100],b[100],c[200];
    cout<<"Enter size of first array:\n";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter size of second array:\n";
    cin>>m;
    for(i=0;i<m;i++){
        cin>>b[i];
    }
   // merging of two array
    merge(a,b,n,m);






   //this stops here
    
    return 0;

}