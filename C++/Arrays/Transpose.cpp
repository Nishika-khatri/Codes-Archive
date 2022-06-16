#include<iostream>

using namespace std;

void Transpose(int arr[][10],int row, int col){

    for(int i =0;i<row;i++){
        for(int j =i;j<col;j++){
            if(i!=j){
                int temp = arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

}

void Reverse(int arr[][10],int row, int col){
    for(int i =0; i<row;i++){
        for(int j =0,k=col-1;j<k;j++,k--){
            swap(arr[i][j],arr[i][k]);
        }
    }
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

    Transpose(arr,row,col);
    cout<<"\nTranspose of a matrix is : "<<endl;
    printMatrix(arr,row,col);

    cout<<"\nReverse of a Matrix is : "<<endl;
    Reverse(arr,row,col);
    printMatrix(arr,row,col);

    return 0;
}