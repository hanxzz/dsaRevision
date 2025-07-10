#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout << arr[i]<<" ";
    }
}

void reverse(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};
    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    cout << endl;
    printArray(brr,5);
}