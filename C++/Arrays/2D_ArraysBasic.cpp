#include<iostream>

using namespace std;

bool isPresent(int arr[][4],int target, int row, int col){

     for (int i = 0; i < row;i++){
          for (int j = 0; j < col;j++){
               if(arr[i][j]==target){
                    return 1;
               }
          }
     }

     return 0;
}

int rowSums(int arr[][4],int row, int col){
     int maxi = INT_MIN;
     for (int i = 0; i < row;i++){
          int sum = 0;
          for (int j = 0; j < col;j++){
               sum += arr[i][j];
          }
          cout << "\nSum of " << i + 1 << " Row is " << sum;
          if(maxi<sum)
               maxi = sum;
     }

     return maxi;
}

int colSums(int arr[][4],int row, int col){
     int maxi = INT_MIN;
     for (int i = 0; i < col;i++){
          int sum = 0;
          for (int j = 0; j < row;j++){
               sum += arr[j][i];
          }

          cout << "\nSum of " << i + 1 << " col is :" << sum;
          if(maxi<sum)
               maxi = sum;
     }
     return maxi;
}

int main(){

     int arr[3][4];

     cout << "Enter elements of the array : " << endl;
     //Row-wise Input
     for (int i = 0; i < 3;i++){
          for (int j = 0; j < 4;j++){
               cin >> arr[i][j];
          }
     }

     //Column wise Input 
     // for (int i = 0; i < 4;i++){
     //      for (int j = 0; j < 3;j++){
     //           cin >> arr[j][i];
     //      }
     // }

     cout << "\nEntered elements are : \n";
     for (int i = 0; i < 3;i++){
          for (int j = 0; j < 4;j++){
               cout << arr[i][j] << "\t";
          }
          cout << endl;
     }

     int target;
     cout << "\nEnter the target element : ";
     cin >> target;

     if(isPresent(arr,target,3,4))
          cout << "\nElement is present in the array." << endl;
     else
          cout << "\nElement is not present in the array." << endl;

     cout << "Sum by Row : " << endl;
     int largestRSum= rowSums(arr, 3, 4);
     cout << "\nLargest sum by Row is : " << largestRSum;

     cout << "\n\nSum by column : ";
     int largestCSum = colSums(arr, 3, 4);
     cout << "\n\nLargest sum by column is : " << largestCSum;

     //Odd even new logic ?
     // if(target&1){
     //      cout <<"\n Odd or even value : "<<(target & 1)<<endl;
     // }
     // else{
     //      cout << "even or odd value :" <<(target&1)<< endl;
     // }
     return 0;
}