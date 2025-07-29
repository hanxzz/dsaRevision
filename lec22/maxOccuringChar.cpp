#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};


    for(int i = 0;i<s.length();i++){
        char ch = s[i];

        //lowercase
        int index = 0;
        if(ch >= 'a' && ch <= 'z'){
            index = ch - 'a';
        }
        //uppercase
        else{
            index = ch - 'A'
        }
        arr[index]++;
    }

    int maxi = -1;
    for(int i = 0;i<s.length();i++){
        
    }
}


int main(){

}