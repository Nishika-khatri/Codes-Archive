//Leetcode Question 3 Longest substring without repeating characters
#include<iostream>
#include<string>

using namespace std;

int lengthOfLongestSubstring(string s){

    int count=0,temp=0;
    string str ="";
    str.push_back(s[0]);

    for(int i=1;i<s.length();i++){
        if(str.find(s[i])== -1){
            str.push_back(s[i]);
        }
        else{
            if(str.at(0)==s[i]){
                str.erase(0);
                str.push_back(s[i]);
            }else{
                str.erase(str.begin(),str.end());
                str.push_back(s[i]);
            }
        }

        temp = str.length();
        if(temp>=count){
            count=temp;
        }
    }

    return count;

}

int main(){
    string s ="bbbbb";

    int result = lengthOfLongestSubstring(s);
    cout<<"The length of the Longest Substring is : "<<result<<endl;

    return 0;
}