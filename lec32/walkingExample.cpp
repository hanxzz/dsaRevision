#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout << "Source: " << src <<endl;
    cout << "Destination: " <<dest<< endl;
    //base case
    if(src == dest){
        cout<<"Reached";
        return;
    }
    //recursive call
    reachHome(src+1,dest);
}


int main(){

    int dest = 10;
    int src = 1;

    reachHome(src,dest);
}