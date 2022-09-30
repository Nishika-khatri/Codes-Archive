#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    cout<<"The Front element in the queue : "<<q1.front()
    <<endl;
    cout<<"The Last element in the queue : "<<q1.back()<<endl;
    cout<<"The size of the queue : "<<q1.size()<<endl;
    q1.pop();
    q1.pop();
    q1.pop();
    cout<<"The size of the queue : "<<q1.size()<<endl;

    if(q1.empty()){
        cout<<"The queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }


    return 0;
}