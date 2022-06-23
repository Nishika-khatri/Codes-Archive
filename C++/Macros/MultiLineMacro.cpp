#include<iostream>
#define ARRAY 1,\
2,\
3,\
4

using namespace std;

int main(){

    int arr[] = {ARRAY};
    cout<<"The elements of the Array : ";
    for(int i =0;i<4;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;

}