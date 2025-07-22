#include<iostream>
using namespace std;

int main(){

    int num = 5;
    cout<< num << endl;
    int arr[] = {1,2,3,5};
    //Address of Operator - &

    cout <<"Address of num is " << &num<<endl;
    cout <<"Value at num is " << num<<endl;

    int *ptr = &num;
    cout <<"Value at num is " << *ptr <<endl;
    cout <<"Address of num is " << ptr <<endl;


    cout <<"array time"<<endl;

    cout << "Address at first index: " << arr<<endl;
    cout << "Address at first index: " << &arr[0]<<endl;
    cout << "Value at first index"<< *(arr + 1);
}