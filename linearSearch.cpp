#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size,  int key){
    for(int i = 0;i<size;i++){
        if(arr[i]== key){
            return true;
        }
    }
    return false;
}


int main(){
    int arr[] = {1,2,3,6,7,4,5};
    if(linearSearch(arr, 7, 19) == 1){
        cout <<"true";
    }
    else{
        cout << "false";
    }
}