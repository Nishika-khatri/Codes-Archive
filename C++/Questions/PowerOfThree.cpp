#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n=243;
    double val = log10(n)/log10(3);
    cout<<"\nVal value : "<<val<<endl;

    cout<<"val : "<<(val - (int)val)<<endl;
    if(val - (int)val == 0){
        cout<<"Yes it is a power of three !";
    }
    else{
        cout<<"No it is not a power of three !";
    }

    return 0;
}