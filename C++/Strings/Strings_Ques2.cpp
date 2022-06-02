//Return the element with maximum number of occurence from the string
//https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

#include<iostream>
#include<string>

using namespace std;

char maxOccurence(string str){

     int arr[26]={0};
     
     int maxi = INT_MIN;
     string ans;
     int temp = 0;
     for (int i = 0; i < str.length();i++){
          if(str[i]>='a' && str[i]<='z'){
               temp = str[i] - 'a';
          }else{
               temp = str[i] - 'A';
          }
          arr[temp]=arr[temp] + 1;
     }

     for (int i = 0; i < 26;i++){
          if(arr[i]>maxi){
               maxi = arr[i];
               temp = i;
          }
     }

     char ch = temp + 'a';

     return ch;
}

int main(){
     string str;
     cout << "Enter any string : ";
     getline(cin, str);

     char result = maxOccurence(str);

     cout << "\nThe maximum occuring character is : " << result;
     return 0;
}
