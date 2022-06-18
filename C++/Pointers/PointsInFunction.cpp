#include<iostream>

using namespace std;

void printVal(int *ptr){
    cout<<"First -> "<<*ptr<<endl;
    cout<<"Second -> "<<ptr<<endl;
    cout<<"Third -> "<<&ptr<<endl;

}
void update(int *p){
    *p = *p +1;

}

int sumArray(int *arr /* arr[] */, int size){
    //arr[] == *arr
    cout<<"\nSize of Array Pointer : "<<sizeof(arr)<<endl;
    int sum =0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        // sum+=i[arr];
    }
    return sum;
}

int main(){

    int value = 5;
    int *ptr = &value;

    // printVal(ptr);
    cout<<"Before value : "<<value<<endl;
    update(ptr);
    cout<<"After value : "<<value<<endl;

    int arr[6]={1,2,3,4,5,6};

    cout<<sumArray(arr,6)<<" Sum of array."<<endl;
    cout<<sumArray(arr+3,3)<<" Sum of last three elements of array."<<endl;


    return 0;
}