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

//Head Insertion Function
void insertAtHead(int data, Node* &head){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

//Tail Insertion Function
void insertAtTail(int data, Node* head){
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newNode;
}


// Display Function
void displaylist(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"Null";
}


int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    cout<<"\nInsertion at Head"<<endl;
    insertAtHead(15,head);
    insertAtHead(20,head);
    insertAtHead(25,head);
    insertAtHead(30,head);
    displaylist(head);

    cout<<"\nInsertion at Tail"<<endl;
    insertAtTail(5,head);
    insertAtTail(0,head);
    displaylist(head);


    return 0;
}