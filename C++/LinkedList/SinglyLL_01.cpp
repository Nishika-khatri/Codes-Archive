#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next; 

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(int data, Node* &head){
    Node* temp = new Node(data);
    temp->next = head;
    head= temp;
}

void insertAtTail(int data, Node* &tail){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(int pos, int data, Node* &head){
    Node* node1 = new Node(data);
    
    if(pos == 1){
        node1->next = head;
        head=node1;
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count!= pos -1){
        temp=temp->next;
        count++;
    }

    node1->next = temp->next;
    temp->next=node1;
}

void traverse(Node* &head){

    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}

int main(){

    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;
    // cout<<"Insertion at Head : "<<endl;
    // insertAtHead(10,head);
    // traverse(head);

    cout<<"Insertion at Tail : "<<endl;
    insertAtTail(10,tail);
    insertAtTail(15,tail);
    insertAtTail(25,tail);
    insertAtTail(30,tail);
    insertAtTail(35,tail);
    traverse(head);

    cout<<"\nAfter Insertion : "<<endl;
    insertAtPosition(1,0,head);
    insertAtPosition(5,20,head);
    insertAtPosition(9,40,head);
    traverse(head);
    return 0;
}