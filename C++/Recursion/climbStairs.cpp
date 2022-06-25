//Leetcode 70
#include<iostream>

using namespace std;

int climbStairs(int stairs){
    if(stairs==1) return 1;
    if(stairs == 2) return 2;

    return climbStairs(stairs-1) + climbStairs(stairs-2);
}

int main(){
    int stairs;
    cout<<"Enter the number of stairs : ";
    cin>>stairs;

    cout<<"\nTotal Distinct ways to climb the stairs are : "<<climbStairs(stairs)<<endl;

    return 0;
}