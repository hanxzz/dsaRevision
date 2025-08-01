#include<iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    Node* next;
    int data;

    //constructor

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data << " ";
        temp = temp -> next;
    }
    cout<<endl;
    
}
void insertAtHead(Node* &head,int d){
    //EMPTY LIST
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    Node* temp = new Node(d);
    temp-> next = head;
    head ->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
        Node*temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

}
int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}

void insertAtPosition(Node* head,Node* tail, int position, int d){
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
    temp-> next ->prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert->prev = temp;


}



void deleteNode(Node* head, int position){
    if(position ==1){
        Node*temp = head;
        temp->next->prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
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
             curr -> prev = NULL;
             prev -> next = curr ->next;
             curr-> next = NULL;
             delete curr;
        }

}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;


    print(head);
    cout <<getLength(head)<<endl;
    insertAtHead(head, 11);
    print(head);
    insertAtHead(head, 13);
    print(head);
    insertAtHead(head, 8);
    print(head);

    insertAtTail(tail, 30);
    print(head);
    insertAtPosition(head,tail,2,90);
    print(head);

    cout<<endl;
    cout<<"After deleting: "<<endl;
    deleteNode(head, 3);
    print(head);
    
}