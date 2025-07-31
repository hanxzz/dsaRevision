#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this-> next!= NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp -> data << " ";
        temp = temp-> next;
    }
    cout<<endl;
}


void insertAtPosition(Node*&tail , Node*& head, int position, int d){
    
    //insert at start
    if(position ==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp-> next == NULL){
        insertAtTail(tail,d);
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp-> next;
    temp-> next = nodeToInsert;


}

    void deleteNode(int position, Node* &head){
        //deleting first node
        if(position == 1){
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        //deleting any other node
        else{
             Node* curr = head;
             Node* prev = NULL;

             int count = 1;
             while(count < position){
                prev = curr;
                curr =curr-> next;
                count++;
             }
             prev->next = curr-> next;
             curr->next = NULL;
             delete curr;
        }

    }
int main(){


    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 12);


    insertAtTail(tail, 13);
    insertAtPosition(tail,head,2,30);
    insertAtPosition(tail,head,1,30);
    insertAtPosition(tail,head,5,30);
    print(head);

    cout <<"After deleting: "<<endl;
    deleteNode(1,head);
    deleteNode(5,head);
    deleteNode(2,head);
    
    print(head);
}
