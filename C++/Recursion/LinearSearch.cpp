#include<iostream>

using namespace std;

bool linearSearch(int arr[], int size, int target){
    
    if(size==0){
        return false;
    }

    if(arr[0]==target){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1,size-1,target);
        return remainingPart;
    }    
}

int main(){
    int arr[10];
    int size,target;
    cout<<"Enter the size of the array : ";
    cin>>size;

    cout<<"\nEnter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"\nEnter target : ";
    cin>>target;

    bool ans = linearSearch(arr,size,target);
    if(ans){
        cout<<"\nElement is present in the array.";
    }else{
        cout<<"\nElement is not present in the array.";
    }

    return 0;
}