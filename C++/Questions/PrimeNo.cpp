#include<iostream>
#include<vector>

using namespace std;

bool isPrime(int num){
    //O(n) Time Complexity
    // if(num<=1)
    //     return false;

    // for(int i =2;i<num;i++){
    //     if(num%i==0){
    //         return false;
    //     }
    // }
    // return true;

    //O(nloglogn) Stieve Erathosthenes

    vector<bool> prime(num+1, true);
    prime[0]=prime[1]=false;

    for(int i =2;i<num;i++){
        if(prime[i]){
            if(num%i==0){
                return false;
            }
            for(int j =2*i;j<num;j=j+1){
                prime[j]=false;
            }
        }
    }

    return true;

}

int main(){

    int num;
    cout<<"Enter number : ";
    cin>>num;

    if(isPrime(num))
        cout<<"\nYes "<<num<<" is a prime number.";
    else
        cout<<"\nNo "<<num<<" is not a prime number.";

    return 0;
}