#include<iostream>

using namespace std;

int BinarySearch(int arr[],int lb, int ub, int key){
    int mid = lb +(ub-lb)/2;
    while(lb<ub){
        if(arr[mid]==key){
            return mid;
        }else if(mid>key){
            ub=mid-1;
        }else{
            lb=mid+1;
        }
        mid = lb + (ub-lb)/2;
    }

    return -1;
}


int main(){
    int size,key;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[10];
    cout<<"\nEnter the elements of the array : ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"\nEnter the key : ";
    cin>>key;

    int result = BinarySearch(arr,0,size-1,key);
    if(result>=0){
        cout<<"Element is present at "<<result<<"th idex in the array.";
    }else{
        cout<<"Element is not present in the array.";
    }
    return 0;
}