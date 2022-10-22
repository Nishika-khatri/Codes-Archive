#include<iostream>
using namespace std;

class circularQueue{
    int* arr;
    int size;
    int front;
    int rear;

    public:
    circularQueue(int size){
        this->size = size;
        arr = new int[size];
        front =-1;
        rear =-1;
    }
    void enqueue(int val){
        if((front ==0 && rear== size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is Full"<<endl;
        }else if(front==-1){
            front ==0;
            rear==0;
            
        }else if(rear==size-1 && front!= 0){
            rear=0;
        }else{
            rear++;
        }
        arr[rear]= val;
    }

    void dequeue(){
        if(front == -1){
            cout<<"The queue is empty."<<endl;
        }else if(front == rear){
            front = -1;
            rear = -1;
        }else if(front == size -1){
            front = 0;
        }else{
            front ++;
        }
    }

    int frontElement(){
        return arr[front];
    }

    int backElement(){
        return arr[rear];
    }

};



int main(){

    circularQueue CQ1(5);
    CQ1.enqueue(10);
    CQ1.enqueue(5);
    CQ1.enqueue(8);
    CQ1.enqueue(9);
    CQ1.enqueue(11);
    cout<<"Front : "<<CQ1.frontElement()<<endl;
    cout<<"Back : "<<CQ1.backElement()<<endl;
    CQ1.dequeue();
    cout<<"Front : "<<CQ1.frontElement()<<endl;
    CQ1.enqueue(15);
    cout<<"Front : "<<CQ1.frontElement()<<endl;
    CQ1.dequeue();
    return 0;

}