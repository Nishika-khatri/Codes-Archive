//Given an array of integers, find maximum sum subarray of the required size.
#include<iostream>

using namespace std;

int maxiSum(int arr[], int size,int targetSize){
    int sum = 0;
    int maxi = INT_MIN;

    for(int i =0,j=0; j<size;){
        sum = sum + arr[j];
        if(j-i+1<targetSize){
            j++;
        }
        else if(j-i+1 == targetSize){
            maxi = max(maxi,sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }

    return maxi;
}

int main(){

    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int* arr = new int[size];

    cout<<"\nEnter the elements of the array : "<<endl;
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

    int targetSize;
    cout<<"Enter the required size : ";
    cin>>targetSize;

    int ans = maxiSum(arr,size,targetSize);
    cout<<"\nThe maximum sum of the array : "<<ans;

    return 0;
}