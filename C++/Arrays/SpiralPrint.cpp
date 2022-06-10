#include<iostream>
#include<vector>

using namespace std;

vector<int> spiralPrint(int arr[][10],int row,int col){

     int stRow = 0, stCol = 0, enRow = row - 1,enCol=col-1;
     vector<int> st;
     int count = 0;
     int total = row * col;
     while(count<total){

          //Starting row
          for (int i = stCol; count<total && i <= enCol;i++){
               cout << arr[stRow][i]<<"\t";
               st.push_back(arr[stRow][i]);
               count++;
          }
          stRow++;

          //Ending col
          for (int i = stRow;count<total && i <= enRow;i++){
               cout << arr[i][enCol]<<"\t";
               st.push_back(arr[i][enCol]);
               count++;
          }
          enCol--;

          //Ending row
          for (int i = enCol;count<total && i >= stCol;i--){
               cout << arr[enRow][i]<<"\t";
               st.push_back(arr[enRow][i]);
               count++;
          }
          enRow--;

          //Starting Col
          for (int i = enRow; count<total && i >= stRow;i--){
               cout <<arr[i][stCol]<<"\t";
               st.push_back(arr[i][stCol]);
               count++;
          }
          stCol++;
     }

     return st;
}

int main(){
     int arr[10][10]={0};
     int row = 0,col=0;
     cout << "\nEnter the row and column size : ";
     cin >> row >> col;

     cout << "\nEnter the elements of the matrix : " << endl;
     for (int i = 0; i < row;i++){
          for (int j = 0; j < col;j++){
               cin >> arr[i][j];
          }
     }

     vector<int> result;

     result = spiralPrint(arr, row, col);

     // for (int i = 0; i < result.size();i++){
     //      cout << result[i] << "\t";
     // }

          return 0;
}