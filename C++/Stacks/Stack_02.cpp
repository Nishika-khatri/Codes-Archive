#include<iostream>

using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top=-1;
    }

    void push(int val){

        if(size-top>1){
            top++;
            arr[top]=val;
            
        }else{
            cout<<"Stack overflowed"<<endl;
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack underflowed"<<endl;
        }
    }
    
    int peak(){

        return arr[top];

    }

    bool isEmpty(){

        if(top<0){
            return true;
        }else return false;

    }
};

int main(){
    Stack s1(5);
    s1.push(1);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(2);

    cout<<"Top element is : "<<s1.peak()<<endl;

    cout<<"Stack is empty ? "<<s1.isEmpty()<<endl;

    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();

    cout<<"Is Stack Empty ?"<<s1.isEmpty()<<endl;
    return 0;

}