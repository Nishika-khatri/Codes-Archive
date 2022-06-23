#include<iostream>

using namespace std;

int main(){
    int row, col;
    cout<<"Enter the size of the  column : ";
    cin>>col;
    cout<<"\nEnter the size of the row : ";
    cin>>row;

    int** arr = new int* [row];
    for(int i =0;i<row;i++){
        arr[i]= new int[col];
    }

    cout<<"\nEnter the elements of the 2D array :"<<endl;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\n2D Array : "<<endl;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    //Releasing Memory 
    for(int i =0;i<row;i++){
        delete [] arr[i];
    }

    delete [] arr;

    cout<<"\nMemory Released !"<<endl;

    return 0;

}