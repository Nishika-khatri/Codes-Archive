#include<iostream>
#include<string>

using namespace std;

int main(){

     string str;
     cout << "Enter any string : ";
     // cin >> str;
     getline(cin, str);
     cout << str;
     return 0;
     
}