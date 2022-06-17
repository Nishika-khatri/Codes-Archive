#include<iostream>

using namespace std;

int main(){

    int num =5;
    int *ptr = &num;

    double d = 4.5;
    double *d1 = &d;

    cout<<"Value of num : "<<num<<endl;
    cout<<"Address of num : "<<&num<<endl;
    cout<<"*ptr value : "<<*ptr<<endl;
    cout<<"ptr value : "<<ptr<<endl;

    cout<<"Size  of pointer ptr: "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer d1: "<<sizeof(d1)<<endl;

    //Null pointer 
    int *ptr2=0;
    // cout<<"Access Null Pointer : "<<*ptr2<<endl;
    ptr2 = &num;
    cout<<"New value of Ptr2: "<<*ptr2<<endl;
    cout<<"Address Stored in Ptr2 : "<<ptr2<<endl;

    return 0;
}