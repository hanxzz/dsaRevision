#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};

void insertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp-> data<<" ";
        temp = temp -> next;
    }
    cout << endl;
}


bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node* , bool> visited;

    Node*temp = head;
    while(temp!= NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }

    return false;

}

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!= NULL){
        fast = fast ->next;
        if(fast!=NULL){
            fast = fast ->next;
        }
        slow = slow -> next;

        if(slow==fast){
            cout<<"Cycle is present at "<< slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

int main(){
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
    //cout << node1 -> next <<endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);


    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);
    insertAtTail(tail , 30);
    print(head);

    tail->next = head -> next;


    if(floydDetectLoop(head)){
        cout << "Cycle is Present" <<endl;
    }
    else{
        cout << "No cycle is present"<<endl;
    }
}