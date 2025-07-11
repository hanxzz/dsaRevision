#include<iostream>
using namespace std;


void sort01(int arr[], int n){
    int i = 0;
    int j = n-1;

    while(i<j){
        if(arr[i] == 0){
            i++;
        }
        else if (arr[j] == 1){
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}



int main(){
    int arr[5] = {1,0,1,0,1};
    sort01(arr, 5);

    for(int i = 0; i<5;i++){
        cout << arr[i] << " ";
    }
}