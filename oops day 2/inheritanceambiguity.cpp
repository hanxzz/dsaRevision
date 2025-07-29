#include<iostream>
using namespace std;


class A{
    public:
    void abc(){
        cout<<"yay im A"<<endl;
    }
};

class B{
    public:
    void abc(){
        cout<<"yay im B"<<endl;
    }
};

class C : public A, public B{

};




int main(){
    C object;
    object.A::abc();
    object.B::abc();
}