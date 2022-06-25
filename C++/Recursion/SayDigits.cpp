#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void sayDigits(int num, string arr[],vector<string> &vec){
    if(num==0) return;
    int temp= num%10;
    vec.push_back(arr[temp]);
    num=num/10;
    sayDigits(num,arr,vec);
}

int main(){
    int num;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Enter any nummber : ";
    cin>>num;
    vector<string> vec;
    sayDigits(num,arr,vec);
    reverse(vec.begin(),vec.end());

    for(int i =0;i<vec.size();i++){
        cout<<vec[i]<<"\t";
    }

    return 0;
}