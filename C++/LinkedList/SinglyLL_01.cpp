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

//Tail Insertion Function Method - 1
void insertAtTail(int data, Node* head){
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newNode;
}


//Tail Insertion Function Method - 2
// void insertAtTail(int data,Node* &tail){
//     Node* temp = new Node(data);
//     tail->next=temp;
//     tail=tail->next;
// }

//Insertion at Middle 
void insertAtPosition(Node* &head/*,Node* &tail*/, int data, int pos){
    Node* newNode = new Node(data);
    Node* temp = head;
    //Insert at Head
    if(pos==1){
        newNode->next=temp;
        head=newNode;
        return;
    }
    //Insert at Mid
    int count=1;
    while(count!= pos-1){
        temp=temp->next;
        count++;
    }
    //Insert at End
    // if(temp->next==NULL){
    //     insertAtTail(data,head);
    //     return;
    // }
    newNode->next=temp->next;
    temp->next=newNode;
}
//Deletion
/*
void deletion(Node* &head,int val){
    Node* temp = head;
    while(temp->data!=val){
        temp=temp->next;
    }

}
*/

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

    
    cout<<"\nInsertion at Tail using head"<<endl;
    insertAtTail(5,head);
    insertAtTail(0,head);
    displaylist(head);

//    cout<<"\nInsertion at Tail using Tail"<<endl;
    //   Node* tail=head;
//    insertAtTail(5,tail);
//    insertAtTail(0,tail);
//    displaylist(head);

    cout<<"\nInsertion at Position"<<endl;
    int pos;
    insertAtPosition(head,19,4);
    insertAtPosition(head,18,5);
    insertAtPosition(head,31,1);
    insertAtPosition(head,-1,11);
    displaylist(head);

    return 0;
}