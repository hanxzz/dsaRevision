#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertNode(Node* &tail,int element , int d){
    //assuming the element is present in the list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non empty list
        Node* current = tail;
        while(current-> data != element){
            current = current-> next;
        }
        //element found -- represented by current
        Node* temp = new Node(d);
        temp->next = current ->next;
        current -> next = temp;
    }
}
void print(Node* tail){
    Node* temp = tail;

    do{
        cout<< tail -> data <<" ";
        tail = tail -> next;
    }
    while(tail!=temp);
    cout <<endl;
}

void deleteNode(Node* tail,int element){
    if(tail == NULL){
        cout<< "List empty"<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr-> data!= element){
            prev = curr;
            curr = curr->next;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
   
    }
}

int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,8);
    print(tail);
    deleteNode(tail,5);
    print(tail);
}