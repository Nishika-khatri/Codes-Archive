#include<iostream>
using namespace std;

//Iterative Approach 
int findGCD(int num1, int num2){
    if(num1==0)
        return num2;
    if(num2==0)
        return num1;
    
    while(num1!=num2){
        if(num1>num2){
            num1-=num2;
        }
        else{
            num2-=num1;
        }
    }
    return num1;
}

int main(){
    int num1,num2;
    cout<<"\nEnter number1 and number2 : ";
    cin>>num1>>num2;

    int result = findGCD(num1,num2);

    cout<<"\nThe GCD or HCF of "<<num1<<" "<<num2<<" is : "<<result;

    return 0;

}

