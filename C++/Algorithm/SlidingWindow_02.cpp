//Longest Subarray of sum k
#include<iostream>
using namespace std;

int maxiSize(int arr[], int size, int k){
    long int sum =0;
    int maxiSize = INT_MIN;
    int i =0;
    int j=0;
    while(j<size){
        sum = sum + arr[j];
        if(sum<k){
            j++;
        }
        else if(sum == k){
            if(maxiSize< j-i+1){
                maxiSize = j-i+1;
            }
            j++;
        }else{
            sum = sum - arr[i];
            i++;
            j++;
        }
    }

    return maxiSize;
}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int* arr = new int[size];
    cout<<"\nEnter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"\nEnter the sum : ";
    cin>>k;

    cout<<"\nThe maximum size of subarray : "<<maxiSize(arr,size,k);


    /* I/p 
    size 7
    Array 4 1 1 1 2 3 5
    Sum 5
    */  
    return 0;
}