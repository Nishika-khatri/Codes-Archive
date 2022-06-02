#include<iostream>
using namespace std;

int getLength(char name[]){
     int count = 0;
     int i = 0;
     while(name[i]!='\0'){
          count++;
          i++;
     }
     return count;
}

void reverseString(char str[]){
     int len = getLength(str);
     for (int i = 0, j = len - 1; i < j;){
          swap(str[i++], str[j--]);
     }
     cout << "\nReversed String is : " << str;
     
}

int main(){

     char name[20];
     cout << "Enter name : ";
     cin >> name;
     cout << name;

     int len = getLength(name);
     cout << "\nLength of string is : " << len;
     reverseString(name);
     
     return 0;
}