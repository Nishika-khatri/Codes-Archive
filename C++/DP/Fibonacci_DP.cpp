#include<iostream>
#include<vector>
using namespace std;

//Memoization 
int fibonacciDP(int num,vector<int> &dp){

    //Base Case
    if(num<=1) return num;

    //check in dp array
    if(dp[num]!=-1) return dp[num];

    //store 
    dp[num] = fibonacciDP(num-1,dp)+ fibonacciDP(num-2,dp);
    return dp[num];

}

int main(){

    int num ;
    vector<int> dp(num+1,-1);

    cout<<"Enter the term number : ";
    cin>>num;

    cout<<"Result is : "<<fibonacciDP(num,dp)<<endl;

    return 0;
}