#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr1, int size1, vector<int> &arr2, int size2, vector<int> &ans){
    int i = 0;
    int j = 0;

    while(i<size1 && j<size2 ){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i<size1){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<size2){
        ans.push_back(arr2[j]);
        j++;
    }
}



int main(){
    vector<int> num1 = {1,3,5,7,9};
    vector<int> num2 = {2,4,6};

    vector<int> ans;

    merge(num1, 5, num2, 3, ans);

    for(int i = 0;i<ans.size();i++){
        cout<< ans[i] << " ";
    }
}
