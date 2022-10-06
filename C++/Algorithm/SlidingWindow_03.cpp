//Subarray with given sum
#include<iostream>
#include<vector>
using namespace std;

vector<int> subarray(int arr[], int size, int s){
    vector<int> ans;
       if(s==0){
           ans.push_back(-1);
           return ans;
       }
       long long sum=0;
       int i =0;
       int j =0;
       
       while(j<n){
           sum = sum + arr[j];
           if(sum<s){
               j++;
           }else if(sum == s){
             ans.push_back(i+1);
             ans.push_back(j+1);
             break;
           }else{
               int temp = arr[i]+arr[j];
               sum = sum - temp;
               i++;
           }
       }
       
       if(ans.empty()){
           ans.push_back(-1);
       }
       
       return ans;
       
    
}

int main(){
    int arr[5] ={1,2,3,4,5};
    int sum = 12;
    vector<int> ans;
    ans = subarray(arr,5,sum);
    
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<"\t";
    }

    return 0;
    
}