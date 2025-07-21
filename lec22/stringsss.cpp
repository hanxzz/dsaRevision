#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverseString(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s], name[e]);
        s++;
        e--;
    }

}


int main(){
    char name[20];
    cout<<"Enter your name"<<endl;

    cin>>name;

    cout<<"Your name is: "<<name<<endl;
    int n = getLength(name);
    cout<<"The length of your name is:"<<n<<endl;
    reverseString(name, n);
    cout<< name;
}