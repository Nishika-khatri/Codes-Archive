#include<iostream>

using namespace std;

bool checkSortedArray(int arr[],int size){

    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining = checkSortedArray(arr+1,size-1);
        return remaining;
    }

}

int main(){
    int arr[10],size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    cout<<"\nEnter the elements of the array : ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    bool ans = checkSortedArray(arr,size);
    if(ans){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted "<<endl;
    }

    return 0;

}