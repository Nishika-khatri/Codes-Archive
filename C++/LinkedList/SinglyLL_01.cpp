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

void insertAtPosition(int pos, int data, Node* &head, Node* &tail){
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

    if(temp->next== NULL){
        insertAtTail(data,tail);
        return;
    }

    node1->next = temp->next;
    temp->next=node1;
}

void deleteFromPosition(Node* &head, int pos){
    //delete from 1st position
    Node* prevNode = head;
    if(pos == 1){
        head = prevNode->next;
        delete prevNode;
        return;
    }

    int count = 1;
    Node* currentNode = head;
    while(count!=pos-1){
        prevNode=prevNode->next;
        count++;
    }
    currentNode = prevNode->next;
    prevNode->next = currentNode->next;
    currentNode->next = NULL;
    delete currentNode;
}

void deleteByValue(Node* &head, int data){
    Node* prevNode = head;
    int count = 0;
    while(prevNode->data !=data){
        prevNode= prevNode->next;
        count++;
    }
    deleteFromPosition(head,count+1);
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
    insertAtPosition(1,0,head,tail);
    insertAtPosition(5,20,head,tail);
    insertAtPosition(9,40,head,tail);
    traverse(head);
    // cout<<"\nHead : "<<head->data<<endl;
    // cout<<"Tail : "<<tail->data<<endl;

    cout<<"\nAfter Deletion : "<<endl;
    // deleteFromPosition(head,1);
    deleteByValue(head,0);
    traverse(head);

    cout<<"\n";
    deleteByValue(head,25);
    traverse(head);
    return 0;
}