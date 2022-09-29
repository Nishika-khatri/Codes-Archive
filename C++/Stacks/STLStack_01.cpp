#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;

    for(int i =0;i<5;i++){
        st.push(i+1);
    }

    cout<<"The top element of the stack is : "<<st.top()<<endl;
    for(int i=0;i<5;i++){
        cout<<st.top()<<endl;
        st.pop();
    }

    if(st.empty()){
        cout<<"Stack is Empty"<<endl;
    }


    return 0;
}