#include<iostream>
#include<string>

using namespace std;

void sayDigits(int num, string arr[]){
    if(num==0) return;
    int temp= num%10;
    num=num/10;
    sayDigits(num,arr);
    cout<<arr[temp]<<"\t";
}

int main(){
    int num;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Enter any nummber : ";
    cin>>num;
    sayDigits(num,arr);

    return 0;
}