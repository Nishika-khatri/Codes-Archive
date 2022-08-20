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
    insertAtHead(10,head);
    traverse(head);
    return 0;
}