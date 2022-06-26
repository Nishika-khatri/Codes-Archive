#include<iostream>

using namespace std;

bool binarySearch(int arr[], int lb, int key, int ub){
    if(lb>ub){
        return false;
    }
    int mid = lb + (ub-lb)/2;

    if(arr[mid]==key){
        return true;
    }else if(arr[mid]>key){
       bool result = binarySearch(arr,lb,key,mid-1);
        return result;
    }else{
        bool result = binarySearch(arr,mid+1,key,ub);
        return result;
    }

   
}

int main(){
    int size,key;
    int arr[10];
    cout<<"Enter the size of the array : ";
    cin>>size;

    cout<<"\nEtnter the elements of the array : ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"\nEnter the key value to be searched : ";
    cin>>key;

    bool ans = binarySearch(arr,0,key,size-1);
    if(ans){
        cout<<"\nKey is present in the array."<<endl;
    }else{
        cout<<"\nKey is not present in the array."<<endl;
    }

    return 0;
}