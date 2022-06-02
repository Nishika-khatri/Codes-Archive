// Replace blank space  with @40
//Note : It is possible to solve without creating new string ? In-place solution?
//https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
#include<iostream>
#include<string>
using namespace std;

string newString(string str){

     string temp = "";
     for (int i = 0; i < str.length();i++){
          if(str[i]==' '){
               temp.push_back('@');
               temp.push_back('4');
               temp.push_back('0');
          }
          else{
               temp.push_back(str[i]);
          }
     }
          return temp;
}

int main(){

     string str;
     cout << "Enter any string : ";
     getline(cin, str);

     string ans = newString(str);
     cout << "\nNew String is : " << ans;

     return 0;
}