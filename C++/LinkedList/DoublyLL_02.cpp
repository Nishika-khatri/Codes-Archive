#include<iostream>

using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    //constructor 
    Node(int data){
        this->data = data;
        this->prev= NULL;
        this->next = NULL;
    }
};

void printNodeList(Node* &head){
    Node*temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp= temp->next;
    }
}

void insertionAtHead(Node* &head, int data){

    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertionAtTail(Node* &tail,int data){
    Node* newnode = new Node(data);

    if(tail==NULL){
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insertAtPosition(Node* head, int data, int pos){
    Node* newnode = new Node(data);
    int count = 1;
    Node* temp = head;

    if(pos == 1){
        newnode->next = temp;
        temp->prev = newnode;
        head =  newnode;
        return;
    }

    while(count!=pos-1){
        temp=temp->next;
        count++;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode->next;
    temp->prev = newnode;
}

void deletionFromPosition(Node* &head, int pos){

    if(head==NULL){
        return;
    }
    if(pos==1){
        Node* deleteNode = head;
        Node* temp = head;
        temp = temp->next;
        temp->prev  = NULL;
        head = temp;
        delete deleteNode;
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }

    if(temp->next->next==NULL){
        Node* deleteNode = temp->next;
        temp->next = NULL;
        delete deleteNode;
        return;

    }

    Node* deleteNode = temp->next;
    temp->next=deleteNode->next;
    temp = temp->next;
    temp->prev = deleteNode->prev;
    delete deleteNode;
}

int linkedListLen(Node* head){
    Node* temp = head;
    int count =0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }

    return count;
}

int main(){
    Node* newNode = new Node(9);
    Node* head = newNode;
    Node* tail = newNode;

    // insertionAtHead(head,5);
    // cout<<"Traversing the Linked List"<<endl;
    // printNodeList(head);

    insertionAtTail(tail,10);
    insertionAtTail(tail,11);
    insertionAtTail(tail,13);
    insertionAtTail(tail,14);

    cout<<"\nInsertion at Tail  : "<<endl;
    printNodeList(head);

    // insertAtPosition(head,12,4);
    // cout<<"\nInsertion at 4th Position  : "<<endl;
    // printNodeList(head);

    deletionFromPosition(head,5);
    cout<<"\nAfter Deleteion : "<<endl;
    printNodeList(head);

    cout<<"\nLength of the doubly linked List : "<<linkedListLen(head);
    return 0;
}