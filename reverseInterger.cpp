#include<iostream>
using namespace std;

int main(){
    int num = 1234;
    int revnum = 0;
    while(num>0){
        int digit = num%10;
        if((revnum> INT_MAX/10)||(revnum< INT_MIN/10)){
            return 0;
        }

        cout<<digit;
        revnum = (revnum*10) + digit;
        num = num/10;

    }
        
    cout<<num;
}