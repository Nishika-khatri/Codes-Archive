#include<iostream>
#define MIN(num1,num2)((num1<num2)?num1:num2)

using  namespace std;

int main(){

    int num1,num2;
    cout<<"Enter number 1 and number 2 :";
    cin>>num1>>num2;

    cout<<"Minimum number is : "<<MIN(num1,num1)<<endl;

    return 0;


}