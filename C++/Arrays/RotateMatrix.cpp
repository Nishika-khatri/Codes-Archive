#include<iostream>
using namespace std;

void RotateMatrix(int matrix[][10],int row, int col){
    //Approach1
    int Top = 0;
        int Left =0;
        int Right = col-1;
        int Bottom = row-1;
        
        while(Left<Right){
            
            for(int i=0;i<(Right-Left);i++){
                int temp=matrix[Top][Left+i];
                matrix[Top][Left+i]=matrix[Bottom-i][Left];
                matrix[Bottom-i][Left]=matrix[Bottom][Right-i];
                matrix[Bottom][Right-i]=matrix[Top+i][Right];
                matrix[Top+i][Right]=temp;
            }
            
            Left++;
            Right--;
            Top++;
            Bottom--;
        }

    //Approach 2: 
    // Find Transpose of a Matrix 
    //Reverse the elements of the Rows of the matrix
}

void printMatrix(int arr[][10],int row, int col){

    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    int arr[10][10];
    int row=0;
    int col=0;

    cout<<"\nEnter the number of rows : ";
    cin>>row;
    cout<<"\nEnter the number of Columns : ";
    cin>>col;

    cout<<"\nEnter the elements of the array : ";
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    RotateMatrix(arr,row,col);
    cout<<"\nRotated Matrix : "<<endl;
    printMatrix(arr,row,col);

    return 0;;
}