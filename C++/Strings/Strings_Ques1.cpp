//Check for Palindrome
#include<iostream>
#include<string>
using namespace std;

string convertToLowerCase(string str){

     for (int i = 0; i < str.length();){
          if(str[i]>='A'&&str[i]<='Z'){
               str[i] = str[i] - 'A' + 'a';
          }
          if(str[i]>='a' && str[i]<='z'){
               i++;
          }else if(str[i]>='0' && str[i]<='9'){
               i++;
          }
          else{
               str[i] = ' ';
               i++;
          }
     }
     cout <<"The new String is : "<<str<<endl;
     return str;
}

bool checkPalindrome(string str){

     string str1 = convertToLowerCase(str);

     int i = 0;
     int e = str1.length()-1;
     while(i<e){
          if(str1[i]==' '){
               i++;
          }
          else if(str1[e]==' '){
               e--;
          }
          else if(str1[i]==str1[e]){
               i++;
               e--;
          }
          else{
               return 0;
          }
     }

     return 1;
}

int main(){

     string str;
     cout << "Enter any string : ";
     getline(cin, str);
     
     bool result = checkPalindrome(str);
     if(result==0){
          cout << "No String is not a Palindrome" << endl;
     }
     else{
          cout << "Yes String is a Palindrome" << endl;
     }

     return 0;
}