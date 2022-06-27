#include<iostream>

using namespace std;

int findPivot(int arr[],int size){
    int lb =0;
    int ub = size-1;
    int mid = lb +(ub-lb)/2;

    while(lb<ub){
        if(arr[mid]>=arr[0]){
            lb = mid+1;
        }else{
            ub = mid;
        }
        mid = lb +(ub-lb)/2;
    }

    return lb;
}

int main(){
    int size,pivot;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[10];
    //I/P = sorted and rotated array = {7,8,9,1,2,3,4,5,6}
    cout<<"\nEnter the elements of the array : ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

    pivot = findPivot(arr,size);
    cout<<"\nPivot element Index is: "<<pivot<<endl;

    return 0;
}