#include<iostream>
using namespace std;

int maxOfArray(int arr[],int size){

     int maxi = INT_MIN;
     for (int i = 0; i < size;i++){
          if(arr[i]>maxi){
               maxi = arr[i];
          }
     }

     return maxi;
}

int minOfArray(int arr[],int size){

     int mini = INT_MAX;
     for (int i = 0; i < size;i++){
          if(arr[i]<mini){
               mini = arr[i];
          }
     }
     return mini;
}

int main(){
     int size;
     int arr[20];
     cout << "Enter the size of the array : ";
     cin >> size;

     for (int i = 0; i < size;i++){
          cin >> arr[i];
     }

     cout << "\nThe maximum element of the array : " << maxOfArray(arr, size)<<endl;
     cout << "\nThe minimum element of the array : " << minOfArray(arr, size);

     return 0;
}