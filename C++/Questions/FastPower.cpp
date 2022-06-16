#include<iostream>

using namespace std;

int fastPower(int num, int power){
    int res= 1;
    while(power>0){
        if(power&1){
            res=res*num;
        }
        num=num*num;
        power=power>>1;
    }

    return res;
}

int main(){

    int num,power;
    cout<<"Enter number and power :";
    cin>>num>>power;

    int result = fastPower(num,power);
    cout<<"\nThe result is : "<<result;

    return 0;
}