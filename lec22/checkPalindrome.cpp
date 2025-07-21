#include<iostream>
using namespace std;

bool checkPalindrome(char s[], int n){
    int start = 0;
    int e = n-1;
    while(start<e){
        if(s[start] == s[e]){
            start++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    int n = 4;
    char s[] = "BOOB";
    cout<<checkPalindrome(s,n);
}