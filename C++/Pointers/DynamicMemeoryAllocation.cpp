#include<iostream>

using namespace std;

int getSum(int *arr,int size){
    int sum =0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum;

}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int *arr = new int[size];

    cout<<"\nEnter the elements of the array : "<<endl;
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"\nSum of array is : "<<getSum(arr,size);

    return 0;
}