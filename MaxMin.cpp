#include <iostream>
using namespace std;

int getMax(int arr[], int n){
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]> max){
            max = arr[i];
        }
        
    }
    return max;
}

int getMin(int arr[], int n){
    int min = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]< min){
            min = arr[i];
        }
        
    }
    return min;
}
int main(){
    int size;
    cout<< "Array size:"<<endl;
    cin >> size;

    int num[100];
    cout << "Enter elements"<<endl;
    for(int i = 0;i<size;i++){
        cin>>num[i];
    }

    cout <<"Max element:"<< getMax(num, size);
    cout <<"Min element:"<< getMin(num, size);
}