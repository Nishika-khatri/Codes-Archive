#include<iostream>

using namespace std;

class Queue{
    int* arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear=0;
    }

    void push(int data){
        if(front == rear){
            front =0;
            rear =0;
            arr[rear]=data;
            rear++;
        }else if(rear<size){
            arr[rear]=data;
            rear++;
        }
        else{
            cout<<"Overflow Condition"<<endl;
        }
    }

    void pop(){
        if(front<=rear){
            front++;
        }else{
            cout<<"Underflow Condition"<<endl;
        }
    }

    int frontElement(){
        return arr[front];
    }

    int rearElement(){
        return arr[rear-1];

    }

    bool isEmpty(){
        if(front==rear && front==0){
            return 1;
        }else{
            return 0;
        }
    }

    int sizeQueue(){
        return rear-front;
    }

};

int main(){

    Queue q1(5);
    if(q1.isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Queue is not Empty"<<endl;
    }

    q1.push(10);
    q1.push(20);
    q1.push(30);
    cout<<"The front element in the queue : "<<q1.frontElement()<<endl;
    cout<<"The Last element in the queue : "<<q1.rearElement()<<endl;
    cout<<"The size of the queue : "<<q1.sizeQueue()<<endl;
    q1.pop();
    cout<<"The front element in the queue : "<<q1.frontElement()<<endl;
    cout<<"The size of the queue : "<<q1.sizeQueue()<<endl;

    return 0;
}