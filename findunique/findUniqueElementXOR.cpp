#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}


int main(){
    int arr[] =  {4,2,3,2,3,4,1,5,1};

    cout <<findUnique(arr,9);

}