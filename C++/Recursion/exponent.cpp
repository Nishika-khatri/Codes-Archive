#include<iostream>

using namespace std;

int exponent(int num,int power){

    if(power==0){
        return 1;
    }

    return num*exponent(num,power-1);

}

int main(){
    int num,power;
    cout<<"Enter any number and power : ";
    cin>>num>>power;

    cout<<"\nFinal answer is : "<<exponent(num,power)<<endl;

    return 0;
}