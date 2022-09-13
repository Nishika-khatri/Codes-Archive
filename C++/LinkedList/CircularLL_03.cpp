#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail, int data,int val){
    Node* newnode = new Node(data);
    if(tail==NULL){
        tail = newnode;
        newnode->next = tail;
        return;
    } 
    Node* curElement = tail;
    while(curElement->data!=val){
        curElement=curElement->next;
    }
    newnode->next=curElement->next;
    curElement->next=newnode;
    tail = newnode;

}

void deleteByVal(Node* &tail, int data){
    if(tail == NULL){
        cout<<"\nNo element found"<<endl;
        return;
    }
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data!=data){
        prev = curr;
        curr= curr->next;
    }

    prev->next = curr->next;
    tail = prev;
    curr->next = NULL;
    delete curr;
}



//With the help of data 
/*
void traverseList(Node* tail){
    if(tail==NULL){
        cout<<"No element found."<<endl;
        return;
    }
    Node* temp = tail;
    cout<<temp->data<<"\t";
    int data = temp->data;
    temp = temp->next;
    while(temp->data!=data){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
*/

//with the help of address
void traverseList(Node* tail){
    Node* temp = tail->next;
    cout<<tail->data<<"\t";
    while(temp!=tail){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}

int main(){

    Node* tail = NULL;
    insertAtTail(tail,5,0);
    cout<<"Traversal of the Circular Linked List : "<<endl;
    // traverseList(tail);
    insertAtTail(tail,6,5);
    // cout<<"\nTraversal of the Circular Linked List : "<<endl;
    // traverseList(tail);
    insertAtTail(tail,7,6);
    // cout<<"\nTraversal of the Circular Linked List : "<<endl;
    // traverseList(tail);
    insertAtTail(tail,8,5);
    // cout<<"\nTraversal of the Circular Linked List : "<<endl;
    // traverseList(tail);
    insertAtTail(tail,9,7);
    // cout<<"\nTraversal of the Circular Linked List : "<<endl;
    traverseList(tail);

    deleteByVal(tail,8);
    cout<<"\nAfter deletion : "<<endl;
    traverseList(tail);
    
    return 0;

}