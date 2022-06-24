#include<iostream>

using namespace std;

void printCount(int num){
    if(num==0) return;

    cout<<num<<"\t";
    printCount(num-1);

}

int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;

    printCount(num);

    return 0;
}