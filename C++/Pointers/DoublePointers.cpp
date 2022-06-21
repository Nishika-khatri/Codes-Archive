#include<iostream>

using namespace std;

int main(){
    int i = 5;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;

    cout<<"Address of i : "<<&i<<endl;
    cout<<"Value stored in ptr1 : "<<ptr1<<endl;
    cout<<"Value stored at the address pointed by ptr2 : "<<*ptr2<<endl;

    cout<<endl<<"*********************"<<endl;

    cout<<"Value at i : "<<i<<endl;
    cout<<"Value at *ptr1 : "<<*ptr1<<endl;
    cout<<"Value at **ptr2 : "<<**ptr2<<endl;

    cout<<endl<<"*********************"<<endl;
    


    return 0;
}