#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

bool isPalindrome(char a[]){

    int i=0;
    int j= strlen(a)-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char a[10000];
    cout<<"Enter the string:\n";
    gets(a);
    if(isPalindrome(a)){
        cout<<"String is Palindrome\n";
    }
    else{
        cout<<"String is not Palindrome\n";
    }
}