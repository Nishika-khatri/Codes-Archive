#include<iostream>

using namespace std;

//Bad Practice 
/*
int& func(int a){
    int num = 10;
    int& ans = num;
    return ans;
}
*/

void update2(int& a){
    a++;
}

void update1(int a){
    a++;
}

int main(){

    int a=5;
    cout<<"Pass by Value "<<endl;
    cout<<"Before a : "<<a<<endl;
    update1(a);
    cout<<"After a : "<<a<<endl;

    cout<<"Pass by reference "<<endl;
    cout<<"Before a : "<<a<<endl;
    update2(a);
    cout<<"After a : "<<a<<endl;


    return 0;

}