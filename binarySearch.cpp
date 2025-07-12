#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    while(s<=e){
       
       if(arr[mid] == key){
            return mid;
       }
       if (arr[mid]< key)
       {
            s = mid+1;
       }
       else{
            e = mid -1;
       }
       mid = (s+e)/2;
       
    }
    return -1;
} 

int main(){


    int arr[] = {2,5,9,13,27};

    cout << binarySearch(arr, 5, 27);
}