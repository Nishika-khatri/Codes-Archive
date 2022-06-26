#include<iostream>

using namespace std;

int sumArray(int arr[],int size){

    if(size==0){
        return 0;
    }
    if(size == 1){
        return arr[size-1];
    }

    int sum = arr[0];
    return sum + sumArray(arr+1,size-1);

}

int main(){
    int arr[10];
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"\nSum of the array : "<<sumArray(arr, size);

    return 0;
}