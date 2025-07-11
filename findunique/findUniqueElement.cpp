#include<iostream>
using namespace std;

    int findUnique(int arr[], int n){
        
        for(int i = 0;i<n;i++){
            int count = 0;
            for(int j = 0;j<n;j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            if(count == 1){
                return arr[i];
            }
        }
    }


int main(){
    int arr[] =  {4,2,3,2,3,4,1,5,5};

    cout <<findUnique(arr,9);

}