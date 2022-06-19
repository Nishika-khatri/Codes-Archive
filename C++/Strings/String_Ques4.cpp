//Leetcode Question 3 Longest substring without repeating characters
#include<iostream>
#include<set>

using namespace std;

int lengthOfLongestSubstring(string s){

    set<char> st;
    int start=0,end=0;
    int count=0;

    while(start<s.length()){
        auto it = st.find(s[start]);

        if(it ==st.end()){
            st.insert(s[start]);
            if(start-end+1>count){
                count = start-end +1;
            }
            start++;
        }
        else{
            st.erase(s[end]);
            end++;
        }
    }
    

    return count;

}

int main(){
    string s ="abcabcbefighjkl";

    int result = lengthOfLongestSubstring(s);
    cout<<"The length of the Longest Substring is : "<<result<<endl;

    return 0;
}