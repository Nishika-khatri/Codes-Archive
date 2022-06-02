//Reverse the array 
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
     cout << "Modified Array : \n";
     for (int i = 0; i < size; i++){
          cout << arr[i] << "\t";
     }
}

void reverseArray(int arr[], int size){
     for (int i = 0, j = size - 1; i < j;i++,j--){
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
     }
}

int main(){
     int arr[10];
     int size;
     cout << "Enter the size of the array : ";
     cin >> size;
     cout << "\nEnter the elements of the array : ";
     for (int i = 0; i < size;i++){
          cin >> arr[i];
     }
     reverseArray(arr, size);
     printArray(arr, size);

     return 0;
}