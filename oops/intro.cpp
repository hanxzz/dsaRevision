#include<iostream>
using namespace std;

class Hero{

    //properties
    private:
    int health;
    public:
    char level;

    void print(){
        cout << level <<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};


int main(){

    // Hero h1; //made object h1 of class Hero

    // cout <<sizeof(h1); //empty class has a size of 1


        Hero hanish;
        cout<< "Ramesh health is" << hanish.getHealth() <<endl;
        hanish.setHealth(70);
        cout<< "Ramesh health is" << hanish.getHealth() <<endl;
        cout << "Level is: " << hanish.level <<endl;
}